/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetKeyCacheType.h>

@class FCThreadSafeMutableDictionary, NSString;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {

	FCThreadSafeMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) FCThreadSafeMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2 ;
-(id)wrappingKeyForWrappingKeyID:(id)arg1 ;
-(id)init;
-(void)removeAllWrappingKeys;
-(FCThreadSafeMutableDictionary *)dictionary;
@end

