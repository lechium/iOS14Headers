/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class ODDPoint, CMDrawingContext, OADOrientedBounds, NSString;

@interface CMDiagramPointMapper : CMMapper {

	ODDPoint* mPoint;
	CMDrawingContext* mDrawingContext;
	OADOrientedBounds* mOrientedBounds;
	NSString* mPresentationName;

}
-(id)fill;
-(id)stroke;
-(id)shapeStyle;
-(float)defaultFontSize;
-(id)diagram;
-(id)plainText;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4 ;
-(id)transformPresentationName;
-(id)transformForPresentationWithName:(id)arg1 ;
-(void)setPresentationName:(id)arg1 ;
-(void)applyDiagramStyleToShapeProperties;
-(void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(BOOL)arg3 includeChildren:(BOOL)arg4 withState:(id)arg5 ;
-(void)renderShapeAsBackgroundInBounds:(id)arg1 ;
-(void)mapStyledRectangle:(CGRect)arg1 at:(id)arg2 withState:(id)arg3 ;
-(void)mapChlidrenAt:(id)arg1 withState:(id)arg2 ;
-(id)presentationName;
-(id)presentationWithName:(id)arg1 ;
-(id)baseTextListStyleWithBounds:(id)arg1 isCentered:(BOOL)arg2 ;
-(void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
-(void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
-(void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4 ;
@end
