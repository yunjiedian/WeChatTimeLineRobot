/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MMPatchMgrExt <NSObject>
@optional
-(void)onPatchCodeUpdateFail:(unsigned long)fail errorCode:(int)code;
-(void)onPatchCodeUpdateSuccess:(unsigned long)success;
@end

