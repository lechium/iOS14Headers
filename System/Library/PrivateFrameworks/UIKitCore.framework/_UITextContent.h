/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLayoutManager, NSTextStorage, NSTextContainer;


@protocol _UITextContent <NSObject>
@property (nonatomic,readonly) NSLayoutManager * layoutManager; 
@property (nonatomic,readonly) NSTextStorage * textStorage; 
@property (nonatomic,readonly) NSTextContainer * textContainer; 
@required
-(NSTextStorage *)textStorage;
-(NSTextContainer *)textContainer;
-(NSLayoutManager *)layoutManager;

@end
