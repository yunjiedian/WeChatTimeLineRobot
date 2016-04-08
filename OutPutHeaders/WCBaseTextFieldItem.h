/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "WeChat-Structs.h"
#import "WCBaseInfoItem.h"

@class WCUITextField, NSString;

@interface WCBaseTextFieldItem : WCBaseInfoItem <UITextFieldDelegate> {
	WCUITextField* m_textField;
	int m_iMaxInputLen;
	BOOL m_bRealLen;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidChanged:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidEndOnExit:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setColor:(id)color;
-(void)setFont:(id)font;
-(void)setText:(id)text;
-(void)setMaxRealStringLen:(int)len;
-(void)setMaxInputLen:(int)len;
-(void)setClearButtonMode:(int)mode;
-(void)setSecureTextEntry:(BOOL)entry;
-(void)setReturnKeyType:(int)type;
-(void)setKeyboardType:(int)type;
-(id)getTextField;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)dealloc;
-(id)initWithTitle:(id)title tip:(id)tip key:(id)key;
-(void)setRestrictShareMenu:(BOOL)menu;
-(void)setEnable:(BOOL)enable;
-(id)getValue;
-(void)initView:(CGRect)view;
@end
