/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, CMailContact;

@interface CMail : XXUnknownSuperclass {
	CMailContact* from;
	NSMutableArray* tolist;
	NSMutableArray* cclist;
	NSMutableArray* bcclist;
	NSString* subject;
	NSString* datetime;
	NSString* contentType;
	NSString* content;
	NSMutableArray* attachlist;
	int tipColor;
	NSString* tipWording;
}
@property(retain, nonatomic) NSString* tipWording;
@property(assign, nonatomic) int tipColor;
@property(retain, nonatomic) NSMutableArray* attachlist;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* contentType;
@property(retain, nonatomic) NSString* datetime;
@property(retain, nonatomic) NSString* subject;
@property(retain, nonatomic) NSMutableArray* bcclist;
@property(retain, nonatomic) NSMutableArray* cclist;
@property(retain, nonatomic) NSMutableArray* tolist;
@property(retain, nonatomic) CMailContact* from;
-(void).cxx_destruct;
-(id)description;
-(void)dealloc;
-(id)initWithXml:(id)xml;
-(void)parseFromXML:(id)xml;
@end

