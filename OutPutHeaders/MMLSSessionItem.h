/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface MMLSSessionItem : XXUnknownSuperclass {
	NSString* session;
	NSString* userName;
	NSMutableArray* _sessionItemArray;
	unsigned long _msgCount;
	unsigned long long fileSize;
}
@property(assign, nonatomic) unsigned long msgCount;
@property(retain, nonatomic) NSMutableArray* sessionItemArray;
@property(assign, nonatomic) unsigned long long fileSize;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) NSString* session;
+(BOOL)sessionItemCompareItem:(id)item withItem:(id)item2;
-(void).cxx_destruct;
-(id)init;
@end

