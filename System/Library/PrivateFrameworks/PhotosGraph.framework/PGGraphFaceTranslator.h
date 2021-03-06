/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphEntityTranslator.h>

@interface PGGraphFaceTranslator : PGGraphEntityTranslator
+(id)entityClassName;
+(BOOL)includesRelationshipChanges;
-(id)graphChangesForDeletedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(id)_momentChangesForFaceLocalIdentifiers:(id)arg1 ;
-(id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)graphChangesForInsertedIdentifiers:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

