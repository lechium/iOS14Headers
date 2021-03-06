/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKBalloonSelectionState : NSObject {

	long long _style;
	NSRange _textSelectionRange;

}

@property (nonatomic,readonly) long long style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSRange textSelectionRange;              //@synthesize textSelectionRange=_textSelectionRange - In the implementation block
+(id)balloonSelectionState:(long long)arg1 ;
+(id)balloonSelectionState:(long long)arg1 textSelectionRange:(NSRange)arg2 ;
-(long long)style;
-(NSRange)textSelectionRange;
-(id)initWithStyle:(long long)arg1 textSelectionRange:(NSRange)arg2 ;
-(id)description;
@end

