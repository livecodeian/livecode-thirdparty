// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/scheme_registrar_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefSchemeRegistrarCToCpp::AddCustomScheme(const CefString& scheme_name,
    bool is_standard, bool is_local, bool is_display_isolated) {
  if (CEF_MEMBER_MISSING(struct_, add_custom_scheme))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: scheme_name; type: string_byref_const
  DCHECK(!scheme_name.empty());
  if (scheme_name.empty())
    return false;

  // Execute
  int _retval = struct_->add_custom_scheme(struct_,
      scheme_name.GetStruct(),
      is_standard,
      is_local,
      is_display_isolated);

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefSchemeRegistrarCToCpp,
    CefSchemeRegistrar, cef_scheme_registrar_t>::DebugObjCt = 0;
#endif

