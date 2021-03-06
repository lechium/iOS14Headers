/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCAULinksResourceConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor {

	FCFetchedValueManager* _configurationManager;

}

@property (nonatomic,readonly) FCFetchedValueManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
-(id)_configuration;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fastCachedValue;
-(id)initWithConfigurationManager:(id)arg1 ;
-(id)init;
-(FCFetchedValueManager *)configurationManager;
-(id)inputManagers;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
@end

