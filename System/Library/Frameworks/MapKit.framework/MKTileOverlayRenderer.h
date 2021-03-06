/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@protocol OS_dispatch_queue;
@class GEOTileKeyList, NSObject;

@interface MKTileOverlayRenderer : MKOverlayRenderer {

	GEOTileKeyList* _pendingRequests;
	NSObject*<OS_dispatch_queue> _pendingRequestsLock;

}
-(void)drawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(void)reloadData;
-(id)initWithOverlay:(id)arg1 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK6)arg1 zoomScale:(double)arg2 ;
-(BOOL)_mayExtendOutsideBounds;
-(id)initWithTileOverlay:(id)arg1 ;
@end

