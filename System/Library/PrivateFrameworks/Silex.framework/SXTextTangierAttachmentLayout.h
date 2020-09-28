/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface SXTextTangierAttachmentLayout : TSDDrawableLayout {

	TSDWrapPolygon* _polygon;

}

@property (nonatomic,retain) TSDWrapPolygon * polygon;              //@synthesize polygon=_polygon - In the implementation block
-(void)validate;
-(TSDWrapPolygon *)polygon;
-(void)setPolygon:(TSDWrapPolygon *)arg1 ;
-(id)wrapPolygon;
-(void)fixTransformFromInterimPosition;
-(void)storeActualPosition;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
@end
