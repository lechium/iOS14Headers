/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSItemProvider, UITextRange;

@interface UITextDraggableObject : NSObject {

	NSItemProvider* _itemProvider;
	UITextRange* _range;
	/*^block*/id _targetedPreviewProvider;
	/*^block*/id _previewProvider;

}

@property (nonatomic,retain) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (nonatomic,retain) UITextRange * range;                        //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) id targetedPreviewProvider;                   //@synthesize targetedPreviewProvider=_targetedPreviewProvider - In the implementation block
@property (nonatomic,copy) id previewProvider;                           //@synthesize previewProvider=_previewProvider - In the implementation block
+(id)draggableObjectWithItemProvider:(id)arg1 fromRange:(id)arg2 ;
-(UITextRange *)range;
-(NSItemProvider *)itemProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(id)targetedPreviewProvider;
-(void)setRange:(UITextRange *)arg1 ;
-(void)setTargetedPreviewProvider:(id)arg1 ;
-(id)previewProvider;
-(void)setPreviewProvider:(id)arg1 ;
@end

