/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)entityName;
+(id)keyPathsForValuesAffectingPersonID;
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(void)awakeFromInsert;
-(NSString *)personID;
-(BOOL)shouldDeleteWhenEmpty;
-(void)setPersonID:(NSString *)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
@end

