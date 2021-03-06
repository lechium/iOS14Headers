/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesUI/NotesUI-Structs.h>
@class ICTrackedParagraph, NSAttributedString;

@interface ICParagraphInfoSortInfo : NSObject {

	ICTrackedParagraph* _trackedParagraph;
	NSAttributedString* _attributedString;
	NSRange _characterRange;

}

@property (nonatomic,retain) ICTrackedParagraph * trackedParagraph;              //@synthesize trackedParagraph=_trackedParagraph - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign,nonatomic) NSRange characterRange;                             //@synthesize characterRange=_characterRange - In the implementation block
-(NSAttributedString *)attributedString;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSRange)characterRange;
-(void)setCharacterRange:(NSRange)arg1 ;
-(void)setTrackedParagraph:(ICTrackedParagraph *)arg1 ;
-(ICTrackedParagraph *)trackedParagraph;
@end

