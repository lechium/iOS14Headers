/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSLocale, NSArray, NSString;

@interface UILocalizedIndexedCollation : NSObject {

	NSLocale* _locale;
	NSArray* _sectionTitles;
	NSArray* _sectionStartStrings;
	NSArray* _sectionIndexTitles;
	NSArray* _sectionIndexMapping;
	NSString* _transform;
	NSString* _firstSectionStartString;
	NSString* _lastSectionStartString;
	CFStringTokenizerRef _tokenizer;

}

@property (nonatomic,readonly) NSArray * sectionTitles; 
@property (nonatomic,readonly) NSArray * sectionIndexTitles; 
+(id)collationWithDictionary:(id)arg1 ;
+(id)currentCollation;
-(CFStringTokenizerRef)tokenizer;
-(void)dealloc;
-(NSArray *)sectionTitles;
-(id)transformedCollationStringForString:(id)arg1 ;
-(long long)sectionForSectionIndexTitleAtIndex:(long long)arg1 ;
-(long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2 ;
-(id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)sectionIndexTitles;
@end

