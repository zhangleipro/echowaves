require File.dirname(__FILE__) + '/../spec_helper'

describe AutoHtml do
  it 'should transform URL to HTML image' do

    auto_html('http://rors.org/images/rails.png') { image }.should == 
      '<img src="http://rors.org/images/rails.png" alt=""/>'

    auto_html('http://farm4.static.flickr.com/3459/3270173112_5099d3d730.jpg') { image }.should == 
      '<img src="http://farm4.static.flickr.com/3459/3270173112_5099d3d730.jpg" alt=""/>'

  end
end