/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MRAVRoutingDiscoverySessionConfiguration : NSObject <NSCopying> {

	BOOL _enableThrottling;
	BOOL _alwaysAllowUpdates;
	BOOL _populatesExternalDevice;
	unsigned _features;
	NSString* _routingContextUID;

}

@property (assign,nonatomic) BOOL populatesExternalDevice;              //@synthesize populatesExternalDevice=_populatesExternalDevice - In the implementation block
@property (nonatomic,readonly) unsigned features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (assign,nonatomic) BOOL enableThrottling;                     //@synthesize enableThrottling=_enableThrottling - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowUpdates;                   //@synthesize alwaysAllowUpdates=_alwaysAllowUpdates - In the implementation block
+(id)configurationWithEndpointFeatures:(unsigned)arg1 ;
-(NSString *)routingContextUID;
-(unsigned)features;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(BOOL)alwaysAllowUpdates;
-(BOOL)enableThrottling;
-(void)setPopulatesExternalDevice:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)populatesExternalDevice;
-(id)initWithEndpointFeatures:(unsigned)arg1 ;
-(unsigned long long)hash;
-(void)setEnableThrottling:(BOOL)arg1 ;
-(void)setAlwaysAllowUpdates:(BOOL)arg1 ;
@end
