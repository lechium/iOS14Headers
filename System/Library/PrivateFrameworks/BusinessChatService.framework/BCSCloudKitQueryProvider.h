/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCSCloudKitQueryProviding.h>

@class NSString;

@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)queryForFetchBloomFilterAndConfigItemWithType:(long long)arg1 ;
-(id)queryForFetchShardIdentifier:(id)arg1 ;
-(id)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3 ;
@end

