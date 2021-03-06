/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "MMUIViewController.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "IWCOutFacadeExt.h"
#import "InviteFriendLogicDelegate.h"

@class WCOutInviteFriendLogic, UISearchDisplayController, WCOutPhoneContact, MMTimer, UILabel, UIImageView, NSString, MMTableView, UIButton, NSMutableDictionary, NSArray, MMUILabel, NSMutableArray;

@interface WCOutContactViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCOutFacadeExt, WCActionSheetDelegate, UISearchBarDelegate, UISearchDisplayDelegate, InviteFriendLogicDelegate> {
	MMTableView* m_tableView;
	UILabel* m_noDataLabel;
	UIImageView* redDotView;
	UIButton* m_callBtn;
	NSMutableDictionary* m_allContactsDic;
	NSMutableArray* m_sectionKeyArray;
	NSMutableDictionary* m_nonAddressBookContactsDic;
	NSMutableDictionary* m_contactToArchiveDic;
	NSMutableArray* m_lastCallArchives;
	float m_lastScrollViewOffset;
	MMTimer* m_hideIndexTitleTimer;
	long m_lastScrollTime;
	NSString* m_curLanguage;
	WCOutPhoneContact* m_selectedContactInActionSheet;
	NSArray* m_phoneArrayShowInActionSheet;
	BOOL _bShowIndexTitle;
	BOOL _isSearching;
	NSArray* _fliterContacts;
	UISearchDisplayController* _m_searchDisplayController;
	NSString* _searchText;
	WCOutInviteFriendLogic* _inviteFriendLogic;
	MMUILabel* _balanceLabel;
	UIButton* _callbtn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIButton* callbtn;
@property(retain, nonatomic) MMUILabel* balanceLabel;
@property(retain, nonatomic) WCOutInviteFriendLogic* inviteFriendLogic;
@property(copy, nonatomic) NSString* searchText;
@property(retain, nonatomic) UISearchDisplayController* m_searchDisplayController;
@property(retain, nonatomic) NSArray* fliterContacts;
@property(assign, nonatomic) BOOL isSearching;
@property(assign, nonatomic) BOOL bShowIndexTitle;
-(void).cxx_destruct;
-(void)didReceiveCouponResponse;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)search:(id)search;
-(id)allContacts;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)updateAccountRedDotWithNeedShow:(BOOL)needShow;
-(void)addNewCall:(id)call;
-(void)updateWCOutContactsInfo;
-(void)updateWCOutContacts:(id)contacts;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)clearSelectStauts;
-(void)rightCallBtnClicked:(id)clicked event:(id)event;
-(id)lastCallCellAtRow:(unsigned)row;
-(id)tableView:(id)view filtercontactCellAtIndexPath:(id)indexPath;
-(id)contactCellAtIndexPath:(id)indexPath;
-(id)accountCellAtIndexpath:(id)indexpath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)hideIndexTitle;
-(void)onClickBottomBtn;
-(void)OnOpenAccount;
-(void)deleteRecentCallItemAtIndex:(int)index;
-(void)showWellcomeTips;
-(void)showProfileForContact:(id)contact AndIsFromLastCallContact:(BOOL)lastCallContact;
-(void)configureBackBarButtomItem;
-(void)configCallBtn;
-(void)configFooterViewWithCount:(unsigned)count;
-(void)configTableView;
-(void)configNoDataHintsLabel;
-(BOOL)showAccount;
-(void)configRecentCallContacts;
-(void)configSearchDisplayController;
-(void)configData;
-(void)configRightBarButtonItem;
-(void)configView;
-(void)configModel;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)init;
-(void)dealloc;
@end

