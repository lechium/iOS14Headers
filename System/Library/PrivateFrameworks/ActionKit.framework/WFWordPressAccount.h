/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFPasswordAccount.h>

@class NSURL;

@interface WFWordPressAccount : WFPasswordAccount {

	NSURL* _endpointURL;

}

@property (nonatomic,copy) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
+(id)serviceID;
+(unsigned long long)modelVersion;
+(id)localizedServiceName;
+(BOOL)allowsMultipleAccounts;
+(id)accountWithUsername:(id)arg1 password:(id)arg2 endpointURL:(id)arg3 ;
-(NSURL *)endpointURL;
-(id)localizedName;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
@end

