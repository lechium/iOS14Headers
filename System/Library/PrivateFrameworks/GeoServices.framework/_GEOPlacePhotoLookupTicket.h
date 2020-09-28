/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServicePhotoLookupTicket.h>

@class NSString, GEOMapItemIdentifier, GEOMapServiceTraits;

@interface _GEOPlacePhotoLookupTicket : GEOAbstractRequestResponseTicket <GEOMapServicePhotoLookupTicket> {

	NSString* _vendorIdentifier;
	GEOMapItemIdentifier* _mapItemIdentifier;
	NSRange _range;
	GEOMapServiceTraits* _traits;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)initWithVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(NSRange)arg3 traits:(id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
@end
