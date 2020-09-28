/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRUpdateEndpointsMessage : MRProtocolMessage {

	NSArray* _endpoints;

}

@property (nonatomic,readonly) NSArray * externalEndpoints; 
@property (nonatomic,readonly) NSArray * externalOutputDevices; 
@property (nonatomic,readonly) NSArray * endpoints; 
@property (nonatomic,readonly) unsigned features; 
-(unsigned)features;
-(NSArray *)externalEndpoints;
-(NSArray *)externalOutputDevices;
-(unsigned long long)type;
-(id)initWithEndpoints:(id)arg1 endpointFeature:(unsigned)arg2 ;
-(NSArray *)endpoints;
@end
