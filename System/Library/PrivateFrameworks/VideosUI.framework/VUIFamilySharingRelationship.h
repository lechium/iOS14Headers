/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _TVContentRating, NSDate;

@interface VUIFamilySharingRelationship : NSObject {

	NSString* _identifier;
	_TVContentRating* _contentRating;
	NSString* _standardDescription;
	NSString* _artworkURL;
	NSDate* _releaseDate;
	NSString* _genreTitle;

}

@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) _TVContentRating * contentRating;              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) NSString * standardDescription;                //@synthesize standardDescription=_standardDescription - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                         //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                          //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * genreTitle;                         //@synthesize genreTitle=_genreTitle - In the implementation block
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)genreTitle;
-(void)setContentRating:(_TVContentRating *)arg1 ;
-(_TVContentRating *)contentRating;
-(void)setStandardDescription:(NSString *)arg1 ;
-(void)setGenreTitle:(NSString *)arg1 ;
-(NSString *)standardDescription;
@end
