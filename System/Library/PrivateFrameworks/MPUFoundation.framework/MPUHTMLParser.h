/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUHTMLParserDelegate;
@class _MPUHTMLDefaultDelegate;

@interface MPUHTMLParser : NSObject {

	_MPUHTMLDefaultDelegate* _defaultDelegate;
	id<MPUHTMLParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPUHTMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)parserWithDefaultAttributes:(id)arg1 ;
+(id)displayDelegateWithDefaultAttributes:(id)arg1 ;
+(id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2 ;
+(id)sanitizedHTMLString:(id)arg1 ;
+(id)parser;
-(id)attributedStringForHTMLString:(id)arg1 error:(id*)arg2 ;
-(void)setDelegate:(id<MPUHTMLParserDelegate>)arg1 ;
-(id<MPUHTMLParserDelegate>)delegate;
@end

