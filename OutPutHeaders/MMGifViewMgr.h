/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class NSMutableArray, NSTimer;

@interface MMGifViewMgr : XXUnknownSuperclass {
	NSMutableArray* m_gifs;
	NSTimer* m_timer;
	unsigned long m_tickCount;
	NSMutableArray* m_updateQueue;
	unsigned long m_emptyRoundTripCount;
}
@property(retain, nonatomic) NSMutableArray* m_updateQueue;
@property(retain, nonatomic) NSTimer* m_timer;
@property(retain, nonatomic) NSMutableArray* m_gifs;
+(unsigned)getIdKeyGifMemoryWarning;
+(unsigned)getIdKeyIdEmoticon;
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedMMGifViewMgr;
+(void)initialize;
+(id)resizeToMaxWidth:(int)maxWidth andMaxHeight:(int)height originImage:(id)image;
-(void).cxx_destruct;
-(void)onApplicationDidReceiveMemoryWarning:(id)onApplication;
-(void)onApplicationDidBecomeActive:(id)onApplication;
-(void)onApplicationWillResignActive:(id)onApplication;
-(void)onApplicationWillTerminate:(id)onApplication;
-(void)updateMaxWidth:(unsigned)width;
-(void)refreshGifViewUpdater:(id)updater;
-(void)unregisterGifViewForUpdate:(id)update;
-(id)findGifItemByView:(id)view;
-(id)createGifViewFromFile:(id)file;
-(id)createGifViewFromData:(id)data;
-(id)createGifViewFromData:(id)data withFilter:(int)filter;
-(void)stopUpdateGifViews;
-(void)startUpdateGifViews;
-(void)updateAllGifItem;
-(id)imageForGifItem:(id)gifItem;
-(unsigned long)getTickCount;
-(unsigned)countOfGifItem;
-(void)removeGifItem:(id)item;
-(void)addGifItem:(id)item;
-(void)removeFromUpdateQueue:(id)updateQueue;
-(void)addToUpdateQueue:(id)updateQueue;
-(unsigned)countOfUpdateQueue;
-(void)dealloc;
-(id)init;
-(void)UnRegisterSysNotifications;
-(void)RegisterSysNotifications;
@end
