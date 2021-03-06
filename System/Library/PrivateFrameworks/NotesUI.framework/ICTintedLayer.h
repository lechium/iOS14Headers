/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface ICTintedLayer : CALayer {

	UIColor* _tintColor;
	id _originalContents;

}

@property (nonatomic,retain) id originalContents;              //@synthesize originalContents=_originalContents - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(void)setContents:(id)arg1 ;
-(void)updateContents;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)originalContents;
-(void)setOriginalContents:(id)arg1 ;
@end

