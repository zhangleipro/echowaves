ActionController::Routing::Routes.draw do |map|
  
  map.resource  :user_session
  map.resources :password_resets
  map.resource  :msgsearch, :only => [:show, :create]
  map.resource  :convosearch, :only => [:show, :create]
  map.resources :users, :member =>  { :tagged_convos => :get,
                                      :followers => :get,
                                      :followed_users => :get,
                                      :followed_convos => :get
                                    }

  map.resources :conversations, :collection => {:bookmarked => :get}, :member => {
    :private_status     => :put,
    :readwrite_status   => :put,
    :report             => :post,
    :toogle_bookmark    => :post,
    :follow             => :post,
    :follow_with_token  => :get,
    :unfollow           => :post,
    :follow_from_list   => :post,
    :unfollow_from_list => :post,
    :invite             => :get,
    :invite_from_list   => :post,
    :remove_user        => :post,
    :files              => :get,
    :images             => :get
    }, :new => { :spawn => :get } do |conversation|
      conversation.resources :messages, :member => { :report => :post }, 
                                        :except => [:edit, :update, :destroy]
    end
  
  
  map.home '/', :controller => "home", :action => "index"
  map.login '/login', :controller => 'user_sessions', :action => 'new'
  map.logout '/logout', :controller => 'user_sessions', :action => 'destroy'
  map.signup '/signup', :controller => 'users', :action => 'new'
  map.activate '/activate/:perishable_token', :controller => "users", :action => "activate"
  
  map.complete_conversation_name '/complete_conversation_name', :controller => 'conversations', :action => "complete_name"
  map.complete_user_name '/complete_user_name', :controller => 'users', :action => "complete_name"
  
  map.connect ':controller/:action/:id'
  map.connect ':controller/:action/:id.:format'
  
end
