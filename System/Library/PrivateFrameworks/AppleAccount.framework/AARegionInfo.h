/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AppleAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString;

@interface AARegionInfo : NSObject <NSCopying> {

	NSDictionary* _regionInfoDictionary;

}

@property (nonatomic,readonly) NSString * displayedHostname; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayedHostname;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end
