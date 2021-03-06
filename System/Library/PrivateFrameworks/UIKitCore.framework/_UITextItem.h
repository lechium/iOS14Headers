/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextItem.h>

@protocol UICoordinateSpace;
@class NSArray, NSURL, NSTextAttachment, NSString;

@interface _UITextItem : NSObject <UITextItem> {

	id<UICoordinateSpace> _coordinateSpace;
	NSArray* _rects;
	long long _type;
	NSURL* _link;
	NSTextAttachment* _attachment;
	NSRange _range;

}

@property (nonatomic,retain) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,retain) NSArray * rects;                                    //@synthesize rects=_rects - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * link;                                       //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSTextAttachment * attachment;                      //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSRange)range;
-(NSArray *)rects;
-(NSURL *)link;
-(id<UICoordinateSpace>)coordinateSpace;
-(NSTextAttachment *)attachment;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(long long)type;
-(void)setRects:(NSArray *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setAttachment:(NSTextAttachment *)arg1 ;
-(void)setLink:(NSURL *)arg1 ;
-(NSString *)description;
@end

