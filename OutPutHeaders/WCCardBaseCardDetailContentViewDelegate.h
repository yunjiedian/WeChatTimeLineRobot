/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCCardBaseCardDetailContentViewDelegate <NSObject>
-(void)onShareCardBtnClick;
-(void)onAcceptCardBtnClick:(BOOL)click;
-(void)onCardHeaderViewOperateBtnClick;
-(void)onCardHeaderViewApplyBtnClick;
-(void)giftCardToFriend;
-(void)openCellList0Item:(id)item;
-(void)openBrandProfileView;
-(void)openUsedStoresView;
-(void)openNearbyShopInfo;
-(void)openCardDetailView;
-(void)openOperationView;
-(void)openSecondaryFieldUrl:(id)url title:(id)title;
-(void)openUrl:(id)url;
-(void)onClickNearbyPhoneBtn;
-(BOOL)bIsCardFromOutAppScene;
-(float)getViewControllerContentViewHeight;
-(id)getGiftCardShareFromUserName;
-(BOOL)shouldShowGiftFromUserHeaderView;
-(int)getCardStatus;
-(BOOL)shouldHideAcceptBtn;
-(BOOL)canShowUseBtnInHeader;
@end
