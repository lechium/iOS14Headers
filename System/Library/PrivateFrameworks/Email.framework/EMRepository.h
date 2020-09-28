/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFScheduler;
@class Protocol, EFFuture;

@interface EMRepository : NSObject {

	id<EFScheduler> _observerScheduler;
	Protocol* _interfaceProtocol;
	EFFuture* _interfaceFuture;

}

@property (nonatomic,retain) id<EFScheduler> observerScheduler;              //@synthesize observerScheduler=_observerScheduler - In the implementation block
@property (readonly) Protocol * interfaceProtocol;                           //@synthesize interfaceProtocol=_interfaceProtocol - In the implementation block
@property (readonly) EFFuture * interfaceFuture;                             //@synthesize interfaceFuture=_interfaceFuture - In the implementation block
-(id)initInternal;
-(id)performQuery:(id)arg1 withObserver:(id)arg2 ;
-(Protocol *)interfaceProtocol;
-(id)trampoliningObserverForObserver:(id)arg1 ;
-(void)prepareRepositoryObjects:(id)arg1 ;
-(void)setObserverScheduler:(id<EFScheduler>)arg1 ;
-(id<EFScheduler>)observerScheduler;
-(EFFuture *)interfaceFuture;
@end
