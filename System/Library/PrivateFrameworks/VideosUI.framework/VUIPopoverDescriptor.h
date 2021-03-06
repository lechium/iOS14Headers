/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideosUI/VideosUI-Structs.h>
@class IKImageElement, IKViewElement, UIColor, NSString, NSArray;

@interface VUIPopoverDescriptor : NSObject {

	IKImageElement* _imageElement;
	IKViewElement* _buttonElement;
	IKViewElement* _popoverElement;
	UIColor* _tintColor;
	NSString* _title;
	unsigned long long _type;
	NSArray* _popoverEntries;
	CGSize _popoverSize;

}

@property (nonatomic,readonly) IKViewElement * buttonElement;               //@synthesize buttonElement=_buttonElement - In the implementation block
@property (nonatomic,readonly) IKViewElement * popoverElement;              //@synthesize popoverElement=_popoverElement - In the implementation block
@property (nonatomic,readonly) CGSize popoverSize;                          //@synthesize popoverSize=_popoverSize - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                         //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * popoverEntries;               //@synthesize popoverEntries=_popoverEntries - In the implementation block
-(UIColor *)tintColor;
-(NSString *)title;
-(id)_init;
-(id)init;
-(unsigned long long)type;
-(void)_populateWithElement:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(CGSize)popoverSize;
-(NSArray *)popoverEntries;
-(IKViewElement *)buttonElement;
-(IKViewElement *)popoverElement;
@end

