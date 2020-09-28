/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	BOOL _fillPath;
	BOOL _force1xImages;
	BOOL _stringKeycapOverImage;
	BOOL _flipImageHorizontally;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSArray* _secondaryDisplayStrings;
	NSArray* _secondaryDisplayStringImages;
	NSArray* _variantDisplayContents;
	NSArray* _highlightedVariantsList;
	long long _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStrings;                      //@synthesize secondaryDisplayStrings=_secondaryDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStringImages;                 //@synthesize secondaryDisplayStringImages=_secondaryDisplayStringImages - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayContents;                       //@synthesize variantDisplayContents=_variantDisplayContents - In the implementation block
@property (nonatomic,retain) NSArray * highlightedVariantsList;                      //@synthesize highlightedVariantsList=_highlightedVariantsList - In the implementation block
@property (assign,nonatomic) long long displayPathType;                              //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) BOOL fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) BOOL force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (assign,nonatomic) BOOL stringKeycapOverImage;                             //@synthesize stringKeycapOverImage=_stringKeycapOverImage - In the implementation block
@property (assign,nonatomic) BOOL flipImageHorizontally;                             //@synthesize flipImageHorizontally=_flipImageHorizontally - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(void)setDisplayString:(NSString *)arg1 ;
-(BOOL)force1xImages;
-(void)setDisplayPathType:(long long)arg1 ;
-(NSArray *)variantDisplayContents;
-(void)setSecondaryDisplayStrings:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setDisplayStringImage:(NSString *)arg1 ;
-(void)setForce1xImages:(BOOL)arg1 ;
-(NSArray *)secondaryDisplayStringImages;
-(BOOL)stringKeycapOverImage;
-(NSArray *)secondaryDisplayStrings;
-(void)setSecondaryDisplayStringImages:(NSArray *)arg1 ;
-(void)setHighlightedVariantsList:(NSArray *)arg1 ;
-(NSString *)displayStringImage;
-(void)setFlipImageHorizontally:(BOOL)arg1 ;
-(NSString *)displayString;
-(void)setVariantDisplayContents:(NSArray *)arg1 ;
-(void)setStringKeycapOverImage:(BOOL)arg1 ;
-(void)setFillPath:(BOOL)arg1 ;
-(BOOL)flipImageHorizontally;
-(UIKBKeyDisplayContents *)fallbackContents;
-(NSArray *)highlightedVariantsList;
-(BOOL)fillPath;
-(long long)displayPathType;
-(id)description;
-(void)setFallbackContents:(UIKBKeyDisplayContents *)arg1 ;
@end
