/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, NSAttributedString;

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell <UITextViewDelegate> {

	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                          //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(NSAttributedString *)attributedText;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)_fontDescriptor;
-(id)init;
-(double)rowHeight;
-(UITextView *)textView;
-(void)_fontSizeDidChange;
@end
