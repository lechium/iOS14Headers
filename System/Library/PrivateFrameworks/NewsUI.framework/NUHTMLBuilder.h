/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface NUHTMLBuilder : NSObject {

	NSMutableString* _string;

}

@property (nonatomic,retain) NSMutableString * string;              //@synthesize string=_string - In the implementation block
-(NSMutableString *)string;
-(id)HTML;
-(void)setString:(NSMutableString *)arg1 ;
-(id)init;
-(id)appendStrong:(id)arg1 ;
-(id)appendBreak;
-(id)appendText:(id)arg1 ;
-(id)appendParagraph:(id)arg1 ;
-(id)appendLink:(id)arg1 withURL:(id)arg2 ;
-(id)fullHTML;
-(id)encodeHTMLEntities:(id)arg1 ;
-(id)URLEncode:(id)arg1 ;
-(id)appendParagraphText:(id)arg1 ;
-(id)appendHTML:(id)arg1 ;
@end
