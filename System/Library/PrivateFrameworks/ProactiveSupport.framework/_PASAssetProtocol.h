/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _PASAssetProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long assetVersion; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long bestAssetVersionObserved; 
@required
-(id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
-(unsigned long long)bestAssetVersionObserved;
-(id)registerUpdateHandler:(/*^block*/id)arg1;
-(unsigned long long)compatibilityVersion;
-(unsigned long long)assetVersion;
-(NSString *)assetType;
-(BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;

@end
