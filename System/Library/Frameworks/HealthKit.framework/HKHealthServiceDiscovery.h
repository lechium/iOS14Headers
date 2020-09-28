/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKHealthServiceDiscovery : NSObject {

	long long _serviceType;
	unsigned long long _discoveryIdentifier;
	/*^block*/id _discoveryHandler;

}

@property (assign,nonatomic) unsigned long long discoveryIdentifier;              //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,copy) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
@property (nonatomic,readonly) long long serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
-(id)initForAllTypes;
-(unsigned long long)discoveryIdentifier;
-(void)setDiscoveryIdentifier:(unsigned long long)arg1 ;
-(id)discoveryHandler;
-(void)setDiscoveryHandler:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)serviceType;
@end
