/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableArray, NSData;
@protocol StoreEmotionRecoverMyPanelListCgiDelegate;

@interface StoreEmotionRecoverMyPanelListCgi : MMObject <PBMessageObserverDelegate> {
	int _scene;
	id<StoreEmotionRecoverMyPanelListCgiDelegate> _delegate;
	unsigned long _m_eventId;
	NSData* _currReqBuf;
	NSMutableArray* _emotionsArray;
}
@property(retain, nonatomic) NSMutableArray* emotionsArray;
@property(retain, nonatomic) NSData* currReqBuf;
@property(assign, nonatomic) unsigned long m_eventId;
@property(assign, nonatomic) __weak id<StoreEmotionRecoverMyPanelListCgiDelegate> delegate;
@property(assign, nonatomic) int scene;
-(void).cxx_destruct;
-(void)callFailedDelegate;
-(void)callOKDelegateWithPids:(id)pids;
-(void)OnGetEmoticonPanelList:(id)list;
-(void)startInternalRequest;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)isActive;
-(void)startRequest;
-(id)initWithDelegate:(id)delegate;
@end

