/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GLKMeshBuffer, GLKMesh, NSString;

@interface GLKSubmesh : NSObject {

	unsigned _type;
	unsigned _mode;
	int _elementCount;
	GLKMeshBuffer* _elementBuffer;
	GLKMesh* _mesh;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned mode;                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) int elementCount;                           //@synthesize elementCount=_elementCount - In the implementation block
@property (nonatomic,readonly) GLKMeshBuffer * elementBuffer;              //@synthesize elementBuffer=_elementBuffer - In the implementation block
@property (nonatomic,__weak,readonly) GLKMesh * mesh;                      //@synthesize mesh=_mesh - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
-(GLKMesh *)mesh;
-(unsigned)mode;
-(GLKMeshBuffer *)elementBuffer;
-(int)elementCount;
-(unsigned)type;
-(NSString *)name;
-(id)initWithMesh:(id)arg1 submesh:(id)arg2 error:(id*)arg3 ;
@end

