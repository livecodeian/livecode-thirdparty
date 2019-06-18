// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
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
// $hash=b06e1d2178705706697480ac9bf699f429ab2ab7$
//

#include "libcef_dll/ctocpp/context_menu_params_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") int CefContextMenuParamsCToCpp::GetXCoord() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_xcoord))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_xcoord(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") int CefContextMenuParamsCToCpp::GetYCoord() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_ycoord))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_ycoord(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefContextMenuParams::TypeFlags CefContextMenuParamsCToCpp::GetTypeFlags() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_type_flags))
    return CM_TYPEFLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_type_flags_t _retval = _struct->get_type_flags(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefString CefContextMenuParamsCToCpp::GetLinkUrl() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_link_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_link_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefContextMenuParamsCToCpp::GetUnfilteredLinkUrl() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_unfiltered_link_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_unfiltered_link_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefContextMenuParamsCToCpp::GetSourceUrl() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_source_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_source_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") bool CefContextMenuParamsCToCpp::HasImageContents() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_image_contents))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_image_contents(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefString CefContextMenuParamsCToCpp::GetTitleText() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_title_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_title_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefContextMenuParamsCToCpp::GetPageUrl() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_page_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_page_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") CefString CefContextMenuParamsCToCpp::GetFrameUrl() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_url))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_frame_url(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefContextMenuParamsCToCpp::GetFrameCharset() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_charset))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_frame_charset(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefContextMenuParams::MediaType CefContextMenuParamsCToCpp::GetMediaType() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_media_type))
    return CM_MEDIATYPE_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_media_type_t _retval = _struct->get_media_type(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefContextMenuParams::MediaStateFlags
CefContextMenuParamsCToCpp::GetMediaStateFlags() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_media_state_flags))
    return CM_MEDIAFLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_media_state_flags_t _retval =
      _struct->get_media_state_flags(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefString CefContextMenuParamsCToCpp::GetSelectionText() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_selection_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefContextMenuParamsCToCpp::GetMisspelledWord() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_misspelled_word))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_misspelled_word(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
bool CefContextMenuParamsCToCpp::GetDictionarySuggestions(
    std::vector<CefString>& suggestions) {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_dictionary_suggestions))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: suggestions; type: string_vec_byref
  cef_string_list_t suggestionsList = cef_string_list_alloc();
  DCHECK(suggestionsList);
  if (suggestionsList)
    transfer_string_list_contents(suggestions, suggestionsList);

  // Execute
  int _retval = _struct->get_dictionary_suggestions(_struct, suggestionsList);

  // Restore param:suggestions; type: string_vec_byref
  if (suggestionsList) {
    suggestions.clear();
    transfer_string_list_contents(suggestionsList, suggestions);
    cef_string_list_free(suggestionsList);
  }

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefContextMenuParamsCToCpp::IsEditable() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_editable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_editable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefContextMenuParamsCToCpp::IsSpellCheckEnabled() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_spell_check_enabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_spell_check_enabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefContextMenuParams::EditStateFlags
CefContextMenuParamsCToCpp::GetEditStateFlags() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_edit_state_flags))
    return CM_EDITFLAG_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_context_menu_edit_state_flags_t _retval =
      _struct->get_edit_state_flags(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") bool CefContextMenuParamsCToCpp::IsCustomMenu() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_custom_menu))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_custom_menu(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefContextMenuParamsCToCpp::IsPepperMenu() {
  shutdown_checker::AssertNotShutdown();

  cef_context_menu_params_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_pepper_menu))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_pepper_menu(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefContextMenuParamsCToCpp::CefContextMenuParamsCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefContextMenuParamsCToCpp::~CefContextMenuParamsCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_context_menu_params_t* CefCToCppRefCounted<
    CefContextMenuParamsCToCpp,
    CefContextMenuParams,
    cef_context_menu_params_t>::UnwrapDerived(CefWrapperType type,
                                              CefContextMenuParams* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType CefCToCppRefCounted<CefContextMenuParamsCToCpp,
                                   CefContextMenuParams,
                                   cef_context_menu_params_t>::kWrapperType =
    WT_CONTEXT_MENU_PARAMS;
