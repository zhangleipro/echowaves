static void define_nd_attribs() {
rb_define_method(cRubyNode, "nd_tval", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_end", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_super", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_rest", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_cond", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_alen", rnode_u2_argc, 0);
rb_define_method(cRubyNode, "nd_state", rnode_u3_state_or_cnt, 0);
rb_define_method(cRubyNode, "nd_modl", rnode_u1_id, 0);
rb_define_method(cRubyNode, "nd_cfnc", rnode_u1_cfunc, 0);
rb_define_method(cRubyNode, "nd_aid", rnode_u3_id, 0);
rb_define_method(cRubyNode, "nd_iter", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_ibdy", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_var", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_vid", rnode_u1_id, 0);
rb_define_method(cRubyNode, "nd_cpath", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_mid", rnode_u2_id, 0);
rb_define_method(cRubyNode, "nd_frml", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_else", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_head", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_opt", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_tbl", rnode_u1_tbl, 0);
rb_define_method(cRubyNode, "nd_argc", rnode_u2_argc, 0);
rb_define_method(cRubyNode, "nd_cnt", rnode_u3_state_or_cnt, 0);
rb_define_method(cRubyNode, "nd_body", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_rval", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_ensr", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_next", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_nth", rnode_u2_argc, 0);
rb_define_method(cRubyNode, "nd_clss", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_defn", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_noex", rnode_u1_as_long, 0);
rb_define_method(cRubyNode, "nd_lit", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_cval", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_recv", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_value", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_resq", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_beg", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_stts", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_2nd", rnode_u2_value_or_node, 0);
rb_define_method(cRubyNode, "nd_1st", rnode_u1_value_or_node, 0);
rb_define_method(cRubyNode, "nd_tag", rnode_u1_id, 0);
rb_define_method(cRubyNode, "nd_args", rnode_u3_value_or_node, 0);
rb_define_method(cRubyNode, "nd_cflag", rnode_u2_argc, 0);
rb_define_method(cRubyNode, "nd_orig", rnode_u3_value_or_node, 0);
}
