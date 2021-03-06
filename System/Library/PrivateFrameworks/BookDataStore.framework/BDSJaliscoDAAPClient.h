/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BDSJaliscoDAAPClientService.h>

@class BDSServiceProxy, NSString;

@interface BDSJaliscoDAAPClient : NSObject <BDSJaliscoDAAPClientService> {

	BOOL _familyUpdateInProgress;
	BDSServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BDSServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (assign,nonatomic) BOOL familyUpdateInProgress;                 //@synthesize familyUpdateInProgress=_familyUpdateInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(BDSServiceProxy *)serviceProxy;
-(void)updatePolitely:(BOOL)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideItemsWithStoreIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setItemHidden:(BOOL)arg1 forStoreID:(id)arg2 ;
-(void)updateFamilyPolitely:(BOOL)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)setServiceProxy:(BDSServiceProxy *)arg1 ;
-(void)setFamilyUpdateInProgress:(BOOL)arg1 ;
-(BOOL)familyUpdateInProgress;
@end

