/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSData, NSString;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSData * etaFilter; 
@property (nonatomic,copy) NSData * evChargingMetadata; 
@property (nonatomic,copy) NSData * originalWaypointRoute; 
@property (nonatomic,copy) NSData * routeAsZilchBinary; 
@property (nonatomic,copy) NSData * routeId; 
@property (nonatomic,copy) NSData * sessionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)route;
+(id)routeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)originalWaypointRoute;
-(void)setOriginalWaypointRoute:(NSData *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSData *)sessionState;
-(NSData *)routeId;
-(void)setSessionState:(NSData *)arg1 ;
-(NSData *)etaFilter;
-(NSData *)routeAsZilchBinary;
-(void)setRouteAsZilchBinary:(NSData *)arg1 ;
-(void)setEtaFilter:(NSData *)arg1 ;
-(NSData *)evChargingMetadata;
-(void)setRouteId:(NSData *)arg1 ;
-(void)setEvChargingMetadata:(NSData *)arg1 ;
@end

