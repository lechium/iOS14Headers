/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting,UITextInput>
@property (assign,nonatomic) BOOL usesStandardTextScaling; 
@optional
+(Class)_textPasteItemClass;
-(void)setUsesStandardTextScaling:(BOOL)arg1;
-(BOOL)usesStandardTextScaling;
-(void)_pasteSessionDidFinish:(id)arg1;

@required
-(void)layoutIfNeeded;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(void)addInvisibleRange:(id)arg1;
-(void)removeInvisibleRange:(id)arg1;
-(id)_implicitPasteConfigurationClasses;
-(BOOL)allowsEditingTextAttributes;
-(id)_inputController;

@end

