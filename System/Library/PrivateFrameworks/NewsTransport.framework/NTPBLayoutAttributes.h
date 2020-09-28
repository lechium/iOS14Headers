/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NTPBLayoutAttributes : PBCodable <NSCopying> {

	long long _accessoryContentMode;
	long long _borderSpecification;
	long long _columnSpan;
	long long _imagePosition;
	long long _numberOfSegments;
	long long _publisherLogoContentMode;
	long long _rowSpan;
	long long _segmentViewDirection;
	long long _titleNextToImageRangeLength;
	long long _titleNextToImageRangeLocation;
	long long _titleTextAlignment;
	float _accessoryBottomPadding;
	NSData* _accessoryFontColor;
	float _accessoryFontLineHeight;
	NSString* _accessoryFontName;
	float _accessoryFontSize;
	NSData* _accessoryIconColor;
	float _accessoryLeftPadding;
	float _accessoryRightPadding;
	float _accessoryTopPadding;
	float _accessoryViewHeight;
	float _accessoryViewWidth;
	float _accessoryViewX;
	float _accessoryViewY;
	NSData* _backgroundColor;
	float _backgroundColorInsetBottom;
	float _backgroundColorInsetLeft;
	float _backgroundColorInsetRight;
	float _backgroundColorInsetTop;
	int _cellType;
	float _contentInsetBottom;
	float _contentInsetLeft;
	float _contentInsetRight;
	float _contentInsetTop;
	NSString* _decorationKind;
	NSData* _excerptColor;
	float _excerptFontLineHeight;
	NSString* _excerptFontName;
	float _excerptFontSize;
	float _excerptFrameHeight;
	float _excerptFrameWidth;
	float _excerptFrameX;
	float _excerptFrameY;
	float _frameHeight;
	float _frameWidth;
	float _frameX;
	float _frameY;
	float _imageViewFrameHeight;
	float _imageViewFrameWidth;
	float _imageViewFrameX;
	float _imageViewFrameY;
	float _logoImageFrameHeight;
	float _logoImageFrameWidth;
	float _logoImageFrameX;
	float _logoImageFrameY;
	NSData* _numberedCircleColor;
	float _numberedCircleFrameHeight;
	float _numberedCircleFrameWidth;
	float _numberedCircleFrameX;
	float _numberedCircleFrameY;
	NSData* _publisherLogoColor;
	float _segmentViewFrameHeight;
	float _segmentViewFrameWidth;
	float _segmentViewFrameX;
	float _segmentViewFrameY;
	float _selectionCornerRadius;
	float _selectionInsetBottom;
	float _selectionInsetLeft;
	float _selectionInsetRight;
	float _selectionInsetTop;
	float _shadowOffsetX;
	float _shadowOffsetY;
	float _shadowOpacity;
	float _shadowRadius;
	float _sharrowFrameHeight;
	float _sharrowFrameWidth;
	float _sharrowFrameX;
	float _sharrowFrameY;
	float _subtitleFrameHeight;
	float _subtitleFrameWidth;
	float _subtitleFrameX;
	float _subtitleFrameY;
	NSData* _titleAttributedString;
	NSData* _titleColor;
	float _titleFontLineHeight;
	NSString* _titleFontName;
	float _titleFontSize;
	float _titleFrameHeight;
	float _titleFrameWidth;
	float _titleFrameX;
	float _titleFrameY;
	BOOL _hasVideo;
	BOOL _isAccessoryViewCompactWidth;
	BOOL _showingAccessoryText;
	SCD_Struct_NT33 _has;

}

@property (assign,nonatomic) float frameX;                                         //@synthesize frameX=_frameX - In the implementation block
@property (assign,nonatomic) float frameY;                                         //@synthesize frameY=_frameY - In the implementation block
@property (assign,nonatomic) float frameWidth;                                     //@synthesize frameWidth=_frameWidth - In the implementation block
@property (assign,nonatomic) float frameHeight;                                    //@synthesize frameHeight=_frameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasColumnSpan; 
@property (assign,nonatomic) long long columnSpan;                                 //@synthesize columnSpan=_columnSpan - In the implementation block
@property (assign,nonatomic) BOOL hasImagePosition; 
@property (assign,nonatomic) long long imagePosition;                              //@synthesize imagePosition=_imagePosition - In the implementation block
@property (assign,nonatomic) BOOL hasImageViewFrameX; 
@property (assign,nonatomic) float imageViewFrameX;                                //@synthesize imageViewFrameX=_imageViewFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasImageViewFrameY; 
@property (assign,nonatomic) float imageViewFrameY;                                //@synthesize imageViewFrameY=_imageViewFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasImageViewFrameWidth; 
@property (assign,nonatomic) float imageViewFrameWidth;                            //@synthesize imageViewFrameWidth=_imageViewFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasImageViewFrameHeight; 
@property (assign,nonatomic) float imageViewFrameHeight;                           //@synthesize imageViewFrameHeight=_imageViewFrameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasTitleFrameX; 
@property (assign,nonatomic) float titleFrameX;                                    //@synthesize titleFrameX=_titleFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasTitleFrameY; 
@property (assign,nonatomic) float titleFrameY;                                    //@synthesize titleFrameY=_titleFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasTitleFrameWidth; 
@property (assign,nonatomic) float titleFrameWidth;                                //@synthesize titleFrameWidth=_titleFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasTitleFrameHeight; 
@property (assign,nonatomic) float titleFrameHeight;                               //@synthesize titleFrameHeight=_titleFrameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasLogoImageFrameX; 
@property (assign,nonatomic) float logoImageFrameX;                                //@synthesize logoImageFrameX=_logoImageFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasLogoImageFrameY; 
@property (assign,nonatomic) float logoImageFrameY;                                //@synthesize logoImageFrameY=_logoImageFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasLogoImageFrameWidth; 
@property (assign,nonatomic) float logoImageFrameWidth;                            //@synthesize logoImageFrameWidth=_logoImageFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasLogoImageFrameHeight; 
@property (assign,nonatomic) float logoImageFrameHeight;                           //@synthesize logoImageFrameHeight=_logoImageFrameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasExcerptFrameX; 
@property (assign,nonatomic) float excerptFrameX;                                  //@synthesize excerptFrameX=_excerptFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasExcerptFrameY; 
@property (assign,nonatomic) float excerptFrameY;                                  //@synthesize excerptFrameY=_excerptFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasExcerptFrameWidth; 
@property (assign,nonatomic) float excerptFrameWidth;                              //@synthesize excerptFrameWidth=_excerptFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasExcerptFrameHeight; 
@property (assign,nonatomic) float excerptFrameHeight;                             //@synthesize excerptFrameHeight=_excerptFrameHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasDecorationKind; 
@property (nonatomic,retain) NSString * decorationKind;                            //@synthesize decorationKind=_decorationKind - In the implementation block
@property (assign,nonatomic) BOOL hasHasVideo; 
@property (assign,nonatomic) BOOL hasVideo;                                        //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign,nonatomic) BOOL hasBorderSpecification; 
@property (assign,nonatomic) long long borderSpecification;                        //@synthesize borderSpecification=_borderSpecification - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleFrameX; 
@property (assign,nonatomic) float subtitleFrameX;                                 //@synthesize subtitleFrameX=_subtitleFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleFrameY; 
@property (assign,nonatomic) float subtitleFrameY;                                 //@synthesize subtitleFrameY=_subtitleFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleFrameWidth; 
@property (assign,nonatomic) float subtitleFrameWidth;                             //@synthesize subtitleFrameWidth=_subtitleFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasSubtitleFrameHeight; 
@property (assign,nonatomic) float subtitleFrameHeight;                            //@synthesize subtitleFrameHeight=_subtitleFrameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasContentInsetTop; 
@property (assign,nonatomic) float contentInsetTop;                                //@synthesize contentInsetTop=_contentInsetTop - In the implementation block
@property (assign,nonatomic) BOOL hasContentInsetLeft; 
@property (assign,nonatomic) float contentInsetLeft;                               //@synthesize contentInsetLeft=_contentInsetLeft - In the implementation block
@property (assign,nonatomic) BOOL hasContentInsetBottom; 
@property (assign,nonatomic) float contentInsetBottom;                             //@synthesize contentInsetBottom=_contentInsetBottom - In the implementation block
@property (assign,nonatomic) BOOL hasContentInsetRight; 
@property (assign,nonatomic) float contentInsetRight;                              //@synthesize contentInsetRight=_contentInsetRight - In the implementation block
@property (assign,nonatomic) BOOL hasRowSpan; 
@property (assign,nonatomic) long long rowSpan;                                    //@synthesize rowSpan=_rowSpan - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryViewX; 
@property (assign,nonatomic) float accessoryViewX;                                 //@synthesize accessoryViewX=_accessoryViewX - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryViewWidth; 
@property (assign,nonatomic) float accessoryViewWidth;                             //@synthesize accessoryViewWidth=_accessoryViewWidth - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryViewY; 
@property (assign,nonatomic) float accessoryViewY;                                 //@synthesize accessoryViewY=_accessoryViewY - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryViewHeight; 
@property (assign,nonatomic) float accessoryViewHeight;                            //@synthesize accessoryViewHeight=_accessoryViewHeight - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColorInsetTop; 
@property (assign,nonatomic) float backgroundColorInsetTop;                        //@synthesize backgroundColorInsetTop=_backgroundColorInsetTop - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColorInsetLeft; 
@property (assign,nonatomic) float backgroundColorInsetLeft;                       //@synthesize backgroundColorInsetLeft=_backgroundColorInsetLeft - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColorInsetBottom; 
@property (assign,nonatomic) float backgroundColorInsetBottom;                     //@synthesize backgroundColorInsetBottom=_backgroundColorInsetBottom - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColorInsetRight; 
@property (assign,nonatomic) float backgroundColorInsetRight;                      //@synthesize backgroundColorInsetRight=_backgroundColorInsetRight - In the implementation block
@property (assign,nonatomic) BOOL hasCellType; 
@property (assign,nonatomic) int cellType;                                         //@synthesize cellType=_cellType - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleFontName; 
@property (nonatomic,retain) NSString * titleFontName;                             //@synthesize titleFontName=_titleFontName - In the implementation block
@property (nonatomic,readonly) BOOL hasExcerptFontName; 
@property (nonatomic,retain) NSString * excerptFontName;                           //@synthesize excerptFontName=_excerptFontName - In the implementation block
@property (assign,nonatomic) BOOL hasTitleFontSize; 
@property (assign,nonatomic) float titleFontSize;                                  //@synthesize titleFontSize=_titleFontSize - In the implementation block
@property (assign,nonatomic) BOOL hasExcerptFontSize; 
@property (assign,nonatomic) float excerptFontSize;                                //@synthesize excerptFontSize=_excerptFontSize - In the implementation block
@property (assign,nonatomic) BOOL hasTitleFontLineHeight; 
@property (assign,nonatomic) float titleFontLineHeight;                            //@synthesize titleFontLineHeight=_titleFontLineHeight - In the implementation block
@property (assign,nonatomic) BOOL hasExcerptFontLineHeight; 
@property (assign,nonatomic) float excerptFontLineHeight;                          //@synthesize excerptFontLineHeight=_excerptFontLineHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleColor; 
@property (nonatomic,retain) NSData * titleColor;                                  //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) BOOL hasExcerptColor; 
@property (nonatomic,retain) NSData * excerptColor;                                //@synthesize excerptColor=_excerptColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,retain) NSData * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasTitleTextAlignment; 
@property (assign,nonatomic) long long titleTextAlignment;                         //@synthesize titleTextAlignment=_titleTextAlignment - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryFontSize; 
@property (assign,nonatomic) float accessoryFontSize;                              //@synthesize accessoryFontSize=_accessoryFontSize - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryFontLineHeight; 
@property (assign,nonatomic) float accessoryFontLineHeight;                        //@synthesize accessoryFontLineHeight=_accessoryFontLineHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryFontColor; 
@property (nonatomic,retain) NSData * accessoryFontColor;                          //@synthesize accessoryFontColor=_accessoryFontColor - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryFontName; 
@property (nonatomic,retain) NSString * accessoryFontName;                         //@synthesize accessoryFontName=_accessoryFontName - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryContentMode; 
@property (assign,nonatomic) long long accessoryContentMode;                       //@synthesize accessoryContentMode=_accessoryContentMode - In the implementation block
@property (assign,nonatomic) BOOL hasShowingAccessoryText; 
@property (assign,nonatomic) BOOL showingAccessoryText;                            //@synthesize showingAccessoryText=_showingAccessoryText - In the implementation block
@property (assign,nonatomic) BOOL hasIsAccessoryViewCompactWidth; 
@property (assign,nonatomic) BOOL isAccessoryViewCompactWidth;                     //@synthesize isAccessoryViewCompactWidth=_isAccessoryViewCompactWidth - In the implementation block
@property (nonatomic,readonly) BOOL hasPublisherLogoColor; 
@property (nonatomic,retain) NSData * publisherLogoColor;                          //@synthesize publisherLogoColor=_publisherLogoColor - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryIconColor; 
@property (nonatomic,retain) NSData * accessoryIconColor;                          //@synthesize accessoryIconColor=_accessoryIconColor - In the implementation block
@property (assign,nonatomic) BOOL hasNumberedCircleFrameX; 
@property (assign,nonatomic) float numberedCircleFrameX;                           //@synthesize numberedCircleFrameX=_numberedCircleFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasNumberedCircleFrameY; 
@property (assign,nonatomic) float numberedCircleFrameY;                           //@synthesize numberedCircleFrameY=_numberedCircleFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasNumberedCircleFrameWidth; 
@property (assign,nonatomic) float numberedCircleFrameWidth;                       //@synthesize numberedCircleFrameWidth=_numberedCircleFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasNumberedCircleFrameHeight; 
@property (assign,nonatomic) float numberedCircleFrameHeight;                      //@synthesize numberedCircleFrameHeight=_numberedCircleFrameHeight - In the implementation block
@property (nonatomic,readonly) BOOL hasNumberedCircleColor; 
@property (nonatomic,retain) NSData * numberedCircleColor;                         //@synthesize numberedCircleColor=_numberedCircleColor - In the implementation block
@property (assign,nonatomic) BOOL hasSharrowFrameX; 
@property (assign,nonatomic) float sharrowFrameX;                                  //@synthesize sharrowFrameX=_sharrowFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasSharrowFrameY; 
@property (assign,nonatomic) float sharrowFrameY;                                  //@synthesize sharrowFrameY=_sharrowFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasSharrowFrameWidth; 
@property (assign,nonatomic) float sharrowFrameWidth;                              //@synthesize sharrowFrameWidth=_sharrowFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasSharrowFrameHeight; 
@property (assign,nonatomic) float sharrowFrameHeight;                             //@synthesize sharrowFrameHeight=_sharrowFrameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasSelectionInsetTop; 
@property (assign,nonatomic) float selectionInsetTop;                              //@synthesize selectionInsetTop=_selectionInsetTop - In the implementation block
@property (assign,nonatomic) BOOL hasSelectionInsetLeft; 
@property (assign,nonatomic) float selectionInsetLeft;                             //@synthesize selectionInsetLeft=_selectionInsetLeft - In the implementation block
@property (assign,nonatomic) BOOL hasSelectionInsetBottom; 
@property (assign,nonatomic) float selectionInsetBottom;                           //@synthesize selectionInsetBottom=_selectionInsetBottom - In the implementation block
@property (assign,nonatomic) BOOL hasSelectionInsetRight; 
@property (assign,nonatomic) float selectionInsetRight;                            //@synthesize selectionInsetRight=_selectionInsetRight - In the implementation block
@property (assign,nonatomic) BOOL hasSelectionCornerRadius; 
@property (assign,nonatomic) float selectionCornerRadius;                          //@synthesize selectionCornerRadius=_selectionCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherLogoContentMode; 
@property (assign,nonatomic) long long publisherLogoContentMode;                   //@synthesize publisherLogoContentMode=_publisherLogoContentMode - In the implementation block
@property (assign,nonatomic) BOOL hasTitleNextToImageRangeLocation; 
@property (assign,nonatomic) long long titleNextToImageRangeLocation;              //@synthesize titleNextToImageRangeLocation=_titleNextToImageRangeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasTitleNextToImageRangeLength; 
@property (assign,nonatomic) long long titleNextToImageRangeLength;                //@synthesize titleNextToImageRangeLength=_titleNextToImageRangeLength - In the implementation block
@property (assign,nonatomic) BOOL hasShadowRadius; 
@property (assign,nonatomic) float shadowRadius;                                   //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) BOOL hasShadowOpacity; 
@property (assign,nonatomic) float shadowOpacity;                                  //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) BOOL hasShadowOffsetX; 
@property (assign,nonatomic) float shadowOffsetX;                                  //@synthesize shadowOffsetX=_shadowOffsetX - In the implementation block
@property (assign,nonatomic) BOOL hasShadowOffsetY; 
@property (assign,nonatomic) float shadowOffsetY;                                  //@synthesize shadowOffsetY=_shadowOffsetY - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentViewFrameX; 
@property (assign,nonatomic) float segmentViewFrameX;                              //@synthesize segmentViewFrameX=_segmentViewFrameX - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentViewFrameY; 
@property (assign,nonatomic) float segmentViewFrameY;                              //@synthesize segmentViewFrameY=_segmentViewFrameY - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentViewFrameWidth; 
@property (assign,nonatomic) float segmentViewFrameWidth;                          //@synthesize segmentViewFrameWidth=_segmentViewFrameWidth - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentViewFrameHeight; 
@property (assign,nonatomic) float segmentViewFrameHeight;                         //@synthesize segmentViewFrameHeight=_segmentViewFrameHeight - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSegments; 
@property (assign,nonatomic) long long numberOfSegments;                           //@synthesize numberOfSegments=_numberOfSegments - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentViewDirection; 
@property (assign,nonatomic) long long segmentViewDirection;                       //@synthesize segmentViewDirection=_segmentViewDirection - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryBottomPadding; 
@property (assign,nonatomic) float accessoryBottomPadding;                         //@synthesize accessoryBottomPadding=_accessoryBottomPadding - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryTopPadding; 
@property (assign,nonatomic) float accessoryTopPadding;                            //@synthesize accessoryTopPadding=_accessoryTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryLeftPadding; 
@property (assign,nonatomic) float accessoryLeftPadding;                           //@synthesize accessoryLeftPadding=_accessoryLeftPadding - In the implementation block
@property (assign,nonatomic) BOOL hasAccessoryRightPadding; 
@property (assign,nonatomic) float accessoryRightPadding;                          //@synthesize accessoryRightPadding=_accessoryRightPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleAttributedString; 
@property (nonatomic,retain) NSData * titleAttributedString;                       //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
-(float)frameWidth;
-(void)setSelectionCornerRadius:(float)arg1 ;
-(void)setSharrowFrameY:(float)arg1 ;
-(float)frameX;
-(float)excerptFrameY;
-(void)setHasVideo:(BOOL)arg1 ;
-(void)setImagePosition:(long long)arg1 ;
-(BOOL)hasTitleFrameY;
-(NSString *)titleFontName;
-(void)setNumberOfSegments:(long long)arg1 ;
-(NSData *)titleAttributedString;
-(float)selectionCornerRadius;
-(NSData *)accessoryIconColor;
-(void)setCellType:(int)arg1 ;
-(void)setTitleAttributedString:(NSData *)arg1 ;
-(float)shadowOpacity;
-(void)setAccessoryFontSize:(float)arg1 ;
-(void)setHasSubtitleFrameX:(BOOL)arg1 ;
-(long long)publisherLogoContentMode;
-(float)titleFrameHeight;
-(long long)rowSpan;
-(NSString *)excerptFontName;
-(float)titleFontSize;
-(NSData *)accessoryFontColor;
-(void)setTitleTextAlignment:(long long)arg1 ;
-(float)accessoryFontSize;
-(NSData *)publisherLogoColor;
-(void)setAccessoryFontColor:(NSData *)arg1 ;
-(long long)numberOfSegments;
-(NSData *)numberedCircleColor;
-(float)shadowRadius;
-(long long)columnSpan;
-(BOOL)hasExcerptFontName;
-(long long)titleNextToImageRangeLocation;
-(void)setShadowRadius:(float)arg1 ;
-(void)setRowSpan:(long long)arg1 ;
-(void)setTitleFontSize:(float)arg1 ;
-(NSString *)accessoryFontName;
-(void)setNumberedCircleFrameX:(float)arg1 ;
-(void)setPublisherLogoContentMode:(long long)arg1 ;
-(void)setTitleFontName:(NSString *)arg1 ;
-(long long)accessoryContentMode;
-(void)setExcerptFontSize:(float)arg1 ;
-(int)cellType;
-(void)setPublisherLogoColor:(NSData *)arg1 ;
-(long long)imagePosition;
-(long long)titleTextAlignment;
-(void)setExcerptFontName:(NSString *)arg1 ;
-(void)setAccessoryFontName:(NSString *)arg1 ;
-(void)setShadowOpacity:(float)arg1 ;
-(float)contentInsetTop;
-(void)setColumnSpan:(long long)arg1 ;
-(float)excerptFontSize;
-(void)setAccessoryIconColor:(NSData *)arg1 ;
-(void)setNumberedCircleColor:(NSData *)arg1 ;
-(BOOL)hasBackgroundColorInsetTop;
-(void)setAccessoryContentMode:(long long)arg1 ;
-(BOOL)hasAccessoryViewHeight;
-(void)setExcerptColor:(NSData *)arg1 ;
-(BOOL)hasHasVideo;
-(void)setHasNumberedCircleFrameWidth:(BOOL)arg1 ;
-(void)setSubtitleFrameX:(float)arg1 ;
-(BOOL)hasExcerptFontSize;
-(BOOL)hasSharrowFrameHeight;
-(void)setExcerptFrameX:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)selectionInsetBottom;
-(void)setTitleNextToImageRangeLength:(long long)arg1 ;
-(float)backgroundColorInsetBottom;
-(float)sharrowFrameY;
-(void)setHasTitleFontLineHeight:(BOOL)arg1 ;
-(void)setExcerptFrameWidth:(float)arg1 ;
-(float)segmentViewFrameY;
-(BOOL)hasSharrowFrameX;
-(BOOL)hasExcerptFrameY;
-(void)setFrameX:(float)arg1 ;
-(void)setHasAccessoryBottomPadding:(BOOL)arg1 ;
-(BOOL)hasLogoImageFrameY;
-(void)setDecorationKind:(NSString *)arg1 ;
-(void)setExcerptFrameY:(float)arg1 ;
-(void)setHasAccessoryContentMode:(BOOL)arg1 ;
-(float)accessoryViewWidth;
-(void)setHasNumberedCircleFrameY:(BOOL)arg1 ;
-(void)setShadowOffsetX:(float)arg1 ;
-(void)setAccessoryBottomPadding:(float)arg1 ;
-(void)setSubtitleFrameY:(float)arg1 ;
-(BOOL)hasCellType;
-(void)writeTo:(id)arg1 ;
-(void)setHasSelectionCornerRadius:(BOOL)arg1 ;
-(void)setAccessoryTopPadding:(float)arg1 ;
-(BOOL)hasNumberedCircleFrameY;
-(void)setLogoImageFrameWidth:(float)arg1 ;
-(float)accessoryViewY;
-(BOOL)hasAccessoryTopPadding;
-(float)selectionInsetTop;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasColumnSpan:(BOOL)arg1 ;
-(BOOL)hasShadowOffsetY;
-(void)setHasExcerptFrameY:(BOOL)arg1 ;
-(float)selectionInsetRight;
-(void)setHasShadowRadius:(BOOL)arg1 ;
-(float)excerptFontLineHeight;
-(float)backgroundColorInsetRight;
-(void)setHasBackgroundColorInsetRight:(BOOL)arg1 ;
-(BOOL)hasSegmentViewFrameWidth;
-(BOOL)hasTitleNextToImageRangeLocation;
-(float)excerptFrameWidth;
-(void)setLogoImageFrameHeight:(float)arg1 ;
-(BOOL)hasSegmentViewFrameHeight;
-(BOOL)hasBorderSpecification;
-(BOOL)hasVideo;
-(void)setAccessoryFontLineHeight:(float)arg1 ;
-(void)setHasShowingAccessoryText:(BOOL)arg1 ;
-(BOOL)hasTitleFrameX;
-(BOOL)hasShowingAccessoryText;
-(void)setContentInsetRight:(float)arg1 ;
-(void)setHasSharrowFrameX:(BOOL)arg1 ;
-(void)setHasAccessoryTopPadding:(BOOL)arg1 ;
-(void)setBackgroundColorInsetBottom:(float)arg1 ;
-(float)logoImageFrameX;
-(float)accessoryLeftPadding;
-(BOOL)showingAccessoryText;
-(BOOL)hasSharrowFrameWidth;
-(void)setTitleNextToImageRangeLocation:(long long)arg1 ;
-(BOOL)hasShadowRadius;
-(BOOL)hasTitleFontName;
-(void)setSharrowFrameHeight:(float)arg1 ;
-(float)excerptFrameHeight;
-(BOOL)hasExcerptColor;
-(BOOL)hasTitleFontLineHeight;
-(void)setHasTitleNextToImageRangeLocation:(BOOL)arg1 ;
-(BOOL)hasPublisherLogoContentMode;
-(void)setSelectionInsetRight:(float)arg1 ;
-(BOOL)hasTitleFontSize;
-(float)subtitleFrameY;
-(void)setSegmentViewFrameY:(float)arg1 ;
-(BOOL)isAccessoryViewCompactWidth;
-(BOOL)hasSelectionCornerRadius;
-(float)imageViewFrameY;
-(void)setHasShadowOffsetX:(BOOL)arg1 ;
-(void)setHasSelectionInsetBottom:(BOOL)arg1 ;
-(void)setHasAccessoryViewHeight:(BOOL)arg1 ;
-(void)setHasBackgroundColorInsetBottom:(BOOL)arg1 ;
-(BOOL)hasBackgroundColorInsetRight;
-(void)setHasSharrowFrameHeight:(BOOL)arg1 ;
-(float)contentInsetRight;
-(void)setSegmentViewFrameHeight:(float)arg1 ;
-(BOOL)hasTitleFrameWidth;
-(float)contentInsetLeft;
-(void)setShadowOffsetY:(float)arg1 ;
-(float)accessoryViewHeight;
-(float)numberedCircleFrameHeight;
-(void)setBackgroundColorInsetTop:(float)arg1 ;
-(void)setHasContentInsetBottom:(BOOL)arg1 ;
-(void)setHasSharrowFrameY:(BOOL)arg1 ;
-(void)setSharrowFrameWidth:(float)arg1 ;
-(float)shadowOffsetX;
-(void)setHasExcerptFontSize:(BOOL)arg1 ;
-(void)setSegmentViewFrameX:(float)arg1 ;
-(BOOL)hasNumberedCircleFrameX;
-(float)imageViewFrameWidth;
-(BOOL)hasImageViewFrameWidth;
-(BOOL)hasRowSpan;
-(void)setSubtitleFrameWidth:(float)arg1 ;
-(void)setHasSegmentViewFrameY:(BOOL)arg1 ;
-(void)setHasLogoImageFrameHeight:(BOOL)arg1 ;
-(BOOL)hasBackgroundColorInsetBottom;
-(BOOL)hasImageViewFrameY;
-(NSData *)backgroundColor;
-(void)setAccessoryViewHeight:(float)arg1 ;
-(void)setHasAccessoryRightPadding:(BOOL)arg1 ;
-(void)setHasNumberOfSegments:(BOOL)arg1 ;
-(void)setHasImageViewFrameY:(BOOL)arg1 ;
-(void)setHasSubtitleFrameHeight:(BOOL)arg1 ;
-(BOOL)hasAccessoryFontSize;
-(void)setAccessoryViewX:(float)arg1 ;
-(void)setExcerptFontLineHeight:(float)arg1 ;
-(float)accessoryTopPadding;
-(void)setSelectionInsetTop:(float)arg1 ;
-(BOOL)hasSubtitleFrameWidth;
-(void)setHasExcerptFrameX:(BOOL)arg1 ;
-(float)numberedCircleFrameX;
-(float)numberedCircleFrameWidth;
-(void)setNumberedCircleFrameY:(float)arg1 ;
-(void)setSelectionInsetLeft:(float)arg1 ;
-(float)segmentViewFrameX;
-(BOOL)hasAccessoryFontLineHeight;
-(float)sharrowFrameWidth;
-(float)titleFrameWidth;
-(void)setHasExcerptFrameWidth:(BOOL)arg1 ;
-(void)setHasAccessoryViewY:(BOOL)arg1 ;
-(BOOL)hasAccessoryBottomPadding;
-(float)shadowOffsetY;
-(void)setHasNumberedCircleFrameHeight:(BOOL)arg1 ;
-(float)excerptFrameX;
-(BOOL)hasTitleFrameHeight;
-(void)setHasImageViewFrameHeight:(BOOL)arg1 ;
-(BOOL)hasSubtitleFrameY;
-(BOOL)hasAccessoryViewX;
-(void)setHasAccessoryViewX:(BOOL)arg1 ;
-(long long)segmentViewDirection;
-(void)setHasContentInsetLeft:(BOOL)arg1 ;
-(NSData *)titleColor;
-(BOOL)hasNumberedCircleFrameWidth;
-(void)setHasTitleFrameWidth:(BOOL)arg1 ;
-(float)titleFontLineHeight;
-(BOOL)hasNumberedCircleFrameHeight;
-(void)setHasSegmentViewFrameHeight:(BOOL)arg1 ;
-(BOOL)hasLogoImageFrameWidth;
-(long long)borderSpecification;
-(BOOL)hasColumnSpan;
-(void)setHasSharrowFrameWidth:(BOOL)arg1 ;
-(float)subtitleFrameHeight;
-(BOOL)hasAccessoryRightPadding;
-(void)setIsAccessoryViewCompactWidth:(BOOL)arg1 ;
-(void)setHasSubtitleFrameY:(BOOL)arg1 ;
-(void)setHasRowSpan:(BOOL)arg1 ;
-(long long)titleNextToImageRangeLength;
-(BOOL)hasAccessoryIconColor;
-(BOOL)hasDecorationKind;
-(BOOL)hasImageViewFrameHeight;
-(BOOL)hasSelectionInsetRight;
-(void)setHasTitleFontSize:(BOOL)arg1 ;
-(void)setFrameY:(float)arg1 ;
-(BOOL)hasSegmentViewFrameX;
-(BOOL)hasNumberedCircleColor;
-(float)sharrowFrameX;
-(float)backgroundColorInsetLeft;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSelectionInsetBottom;
-(void)setHasContentInsetRight:(BOOL)arg1 ;
-(void)setImageViewFrameWidth:(float)arg1 ;
-(void)setImageViewFrameY:(float)arg1 ;
-(BOOL)hasContentInsetLeft;
-(BOOL)hasAccessoryFontColor;
-(void)setNumberedCircleFrameHeight:(float)arg1 ;
-(float)segmentViewFrameWidth;
-(float)frameY;
-(BOOL)hasSubtitleFrameHeight;
-(float)subtitleFrameX;
-(BOOL)hasShadowOpacity;
-(float)accessoryBottomPadding;
-(float)sharrowFrameHeight;
-(void)setHasAccessoryLeftPadding:(BOOL)arg1 ;
-(float)imageViewFrameHeight;
-(void)setBackgroundColorInsetRight:(float)arg1 ;
-(void)setHasImageViewFrameX:(BOOL)arg1 ;
-(void)setSelectionInsetBottom:(float)arg1 ;
-(float)titleFrameY;
-(BOOL)hasAccessoryContentMode;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasShadowOpacity:(BOOL)arg1 ;
-(void)setFrameWidth:(float)arg1 ;
-(float)accessoryViewX;
-(void)setHasSegmentViewFrameWidth:(BOOL)arg1 ;
-(void)setHasHasVideo:(BOOL)arg1 ;
-(void)setHasBackgroundColorInsetTop:(BOOL)arg1 ;
-(void)setTitleFrameHeight:(float)arg1 ;
-(BOOL)hasSegmentViewDirection;
-(BOOL)hasPublisherLogoColor;
-(void)setHasTitleTextAlignment:(BOOL)arg1 ;
-(float)backgroundColorInsetTop;
-(void)setSegmentViewDirection:(long long)arg1 ;
-(void)setTitleFrameX:(float)arg1 ;
-(BOOL)hasExcerptFrameHeight;
-(void)setAccessoryViewY:(float)arg1 ;
-(void)setBackgroundColorInsetLeft:(float)arg1 ;
-(void)setLogoImageFrameY:(float)arg1 ;
-(void)setHasCellType:(BOOL)arg1 ;
-(void)setHasSelectionInsetTop:(BOOL)arg1 ;
-(BOOL)hasSegmentViewFrameY;
-(void)setHasNumberedCircleFrameX:(BOOL)arg1 ;
-(void)setHasAccessoryFontLineHeight:(BOOL)arg1 ;
-(BOOL)hasSubtitleFrameX;
-(BOOL)hasAccessoryViewWidth;
-(void)setTitleFontLineHeight:(float)arg1 ;
-(BOOL)hasBackgroundColor;
-(void)setHasAccessoryFontSize:(BOOL)arg1 ;
-(void)setHasImagePosition:(BOOL)arg1 ;
-(void)setContentInsetLeft:(float)arg1 ;
-(float)contentInsetBottom;
-(BOOL)hasTitleColor;
-(NSString *)decorationKind;
-(float)numberedCircleFrameY;
-(void)setHasContentInsetTop:(BOOL)arg1 ;
-(void)setSegmentViewFrameWidth:(float)arg1 ;
-(void)setShowingAccessoryText:(BOOL)arg1 ;
-(BOOL)hasContentInsetTop;
-(void)setHasExcerptFrameHeight:(BOOL)arg1 ;
-(BOOL)hasContentInsetRight;
-(void)setHasLogoImageFrameX:(BOOL)arg1 ;
-(void)setAccessoryViewWidth:(float)arg1 ;
-(void)setHasImageViewFrameWidth:(BOOL)arg1 ;
-(void)setHasSelectionInsetRight:(BOOL)arg1 ;
-(float)subtitleFrameWidth;
-(BOOL)hasExcerptFrameX;
-(void)setBorderSpecification:(long long)arg1 ;
-(void)setHasTitleFrameY:(BOOL)arg1 ;
-(BOOL)hasImagePosition;
-(void)setContentInsetTop:(float)arg1 ;
-(BOOL)hasImageViewFrameX;
-(NSData *)excerptColor;
-(void)setExcerptFrameHeight:(float)arg1 ;
-(BOOL)hasAccessoryViewY;
-(void)setContentInsetBottom:(float)arg1 ;
-(void)setHasSegmentViewDirection:(BOOL)arg1 ;
-(void)setHasShadowOffsetY:(BOOL)arg1 ;
-(BOOL)hasTitleTextAlignment;
-(void)setSharrowFrameX:(float)arg1 ;
-(float)logoImageFrameY;
-(unsigned long long)hash;
-(BOOL)hasSelectionInsetTop;
-(BOOL)hasTitleAttributedString;
-(BOOL)hasExcerptFrameWidth;
-(BOOL)hasNumberOfSegments;
-(float)selectionInsetLeft;
-(BOOL)hasExcerptFontLineHeight;
-(void)setHasAccessoryViewWidth:(BOOL)arg1 ;
-(BOOL)hasLogoImageFrameHeight;
-(BOOL)hasLogoImageFrameX;
-(void)setTitleFrameWidth:(float)arg1 ;
-(float)frameHeight;
-(void)setHasSubtitleFrameWidth:(BOOL)arg1 ;
-(void)setTitleColor:(NSData *)arg1 ;
-(void)setHasBackgroundColorInsetLeft:(BOOL)arg1 ;
-(void)setHasBorderSpecification:(BOOL)arg1 ;
-(void)setHasIsAccessoryViewCompactWidth:(BOOL)arg1 ;
-(void)setImageViewFrameX:(float)arg1 ;
-(BOOL)hasAccessoryFontName;
-(BOOL)hasAccessoryLeftPadding;
-(void)setHasTitleFrameHeight:(BOOL)arg1 ;
-(void)setHasSelectionInsetLeft:(BOOL)arg1 ;
-(void)setAccessoryRightPadding:(float)arg1 ;
-(void)setSubtitleFrameHeight:(float)arg1 ;
-(float)titleFrameX;
-(void)setHasPublisherLogoContentMode:(BOOL)arg1 ;
-(void)setHasTitleFrameX:(BOOL)arg1 ;
-(BOOL)hasSelectionInsetLeft;
-(void)setBackgroundColor:(NSData *)arg1 ;
-(BOOL)hasIsAccessoryViewCompactWidth;
-(void)setHasLogoImageFrameWidth:(BOOL)arg1 ;
-(BOOL)hasShadowOffsetX;
-(void)setTitleFrameY:(float)arg1 ;
-(id)description;
-(BOOL)hasTitleNextToImageRangeLength;
-(BOOL)hasBackgroundColorInsetLeft;
-(float)logoImageFrameHeight;
-(float)logoImageFrameWidth;
-(void)setLogoImageFrameX:(float)arg1 ;
-(void)setHasExcerptFontLineHeight:(BOOL)arg1 ;
-(void)setAccessoryLeftPadding:(float)arg1 ;
-(BOOL)hasContentInsetBottom;
-(float)segmentViewFrameHeight;
-(BOOL)hasSharrowFrameY;
-(void)setHasTitleNextToImageRangeLength:(BOOL)arg1 ;
-(float)accessoryRightPadding;
-(void)setHasSegmentViewFrameX:(BOOL)arg1 ;
-(void)setNumberedCircleFrameWidth:(float)arg1 ;
-(float)accessoryFontLineHeight;
-(id)dictionaryRepresentation;
-(float)imageViewFrameX;
-(void)setFrameHeight:(float)arg1 ;
-(void)setImageViewFrameHeight:(float)arg1 ;
-(void)setHasLogoImageFrameY:(BOOL)arg1 ;
@end
