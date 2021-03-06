/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol AXUIService, NSObjectNSCopying;
@class NSMutableArray;

@interface AXUIServiceContext : NSObject {

	id<AXUIService> _service;
	id<NSObject><NSCopying> _serviceIdentifier;
	NSMutableArray* _clientMessengers;

}

@property (nonatomic,retain) id<AXUIService> service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientMessengers;                    //@synthesize clientMessengers=_clientMessengers - In the implementation block
@property (nonatomic,readonly) unsigned long long clientsCount; 
-(void)addClientWithIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)initWithService:(id)arg1 serviceIdentifier:(id)arg2 ;
-(BOOL)hasClientWithIdentifier:(id)arg1 ;
-(NSMutableArray *)clientMessengers;
-(void)setServiceIdentifier:(id<NSObject><NSCopying>)arg1 ;
-(id)clientMessengerWithIdentifier:(id)arg1 ;
-(void)setClientMessengers:(NSMutableArray *)arg1 ;
-(void)removeClientWithIdentifier:(id)arg1 ;
-(id<AXUIService>)service;
-(unsigned long long)_indexOfClientWithIdentifier:(id)arg1 ;
-(id<NSObject><NSCopying>)serviceIdentifier;
-(void)enumerateClientsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)clientsCount;
-(void)setService:(id<AXUIService>)arg1 ;
@end

