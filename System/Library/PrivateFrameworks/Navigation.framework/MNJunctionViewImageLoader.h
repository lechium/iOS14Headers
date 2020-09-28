/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MNJunctionViewImageLoader : NSObject {

	NSArray* _preloadEvents;
	double _imageWidth;
	double _imageHeight;

}
-(void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2 ;
-(id)init;
-(id)_stringForImageIDs:(id)arg1 ;
-(void)imagesForJunctionView:(id)arg1 eventID:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_imagesForIDs:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_imagesForRequest:(id)arg1 response:(id)arg2 ;
-(void)setJunctionViewEvents:(id)arg1 ;
-(void)updateForLocation:(id)arg1 remainingDistanceOnRoute:(double)arg2 ;
@end
