/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {

	OADTextBodyProperties* mProperties;
	NSMutableArray* mParagraphs;
	OADTextListStyle* mTextListStyle;

}
-(void)setProperties:(id)arg1 ;
-(id)init;
-(id)properties;
-(BOOL)isEmpty;
-(id)description;
-(id)plainText;
-(unsigned long long)paragraphCount;
-(id)paragraphAtIndex:(unsigned long long)arg1 ;
-(id)addParagraph;
-(id)overrideTextListStyle;
-(id)textListStyle;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(BOOL)arg2 ;
-(void)flattenProperties;
-(BOOL)propagateActualTextStyleToTextListStyle;
-(unsigned long long)nonEmptyParagraphCount;
-(void)removeAllParagraphs;
-(unsigned long long)newLineCount;
-(id)firstParagraphEffects;
-(void)applyTextListStyle:(id)arg1 ;
-(void)removeTrailingNewlines;
-(void)removeLeadingNewlines;
-(void)removeLastParagraphIfEmpty;
-(BOOL)isSimilarToTextBody:(id)arg1 ;
-(void)addParagraphsFromTextBody:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
@end

