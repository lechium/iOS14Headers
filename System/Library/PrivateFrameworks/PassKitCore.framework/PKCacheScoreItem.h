/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;

}
+(BOOL)supportsSecureCoding;
-(BOOL)hasExpired;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
@end

