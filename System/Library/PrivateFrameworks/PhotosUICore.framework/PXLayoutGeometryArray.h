/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXLayoutGeometryArray : NSObject <NSCopying> {

	PXLayoutGeometry* _geometries;
	long long _count;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithGeometries:(PXLayoutGeometry*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1 ;
@end

