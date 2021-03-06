/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIVisualEffect;

@interface UITableViewRowAction : NSObject <NSCopying> {

	long long _style;
	NSString* _title;
	UIColor* _backgroundColor;
	/*^block*/id _handler;
	UIVisualEffect* _backgroundEffect;

}

@property (getter=_handler,nonatomic,readonly) id handler;                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
+(id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_button;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(long long)style;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(UIColor *)backgroundColor;
-(/*^block*/id)_handler;
-(UIVisualEffect *)backgroundEffect;
-(void)_setButton:(id)arg1 ;
-(id)_initWithStyle:(long long)arg1 title:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
@end

