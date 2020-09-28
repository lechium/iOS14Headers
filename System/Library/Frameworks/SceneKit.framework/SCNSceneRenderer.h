/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SCNScene, SCNNode, SKScene, MTLRenderPassDescriptor, AVAudioEngine, AVAudioEnvironmentNode;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic,__weak) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,getter=isTemporalAntialiasingEnabled,nonatomic) BOOL temporalAntialiasingEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) MTLRenderPassDescriptor * currentRenderPassDescriptor; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@property (nonatomic,readonly) CGRect currentViewport; 
@property (assign,nonatomic) BOOL usesReverseZ; 
@required
-(id<MTLDevice>)device;
-(BOOL)isPlaying;
-(id<MTLCommandQueue>)commandQueue;
-(unsigned long long)debugOptions;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(void)setJitteringEnabled:(BOOL)arg1;
-(double)sceneTime;
-(BOOL)autoenablesDefaultLighting;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)setAudioListener:(id)arg1;
-(void)setDebugOptions:(unsigned long long)arg1;
-(unsigned long long)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(unsigned long long)renderingAPI;
-(BOOL)loops;
-(void)setSceneTime:(double)arg1;
-(void)setPlaying:(BOOL)arg1;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(void)setShowsStatistics:(BOOL)arg1;
-(void)setScene:(id)arg1;
-(unsigned long long)depthPixelFormat;
-(MTLRenderPassDescriptor *)currentRenderPassDescriptor;
-(SCNNode *)audioListener;
-(unsigned long long)colorPixelFormat;
-(BOOL)isJitteringEnabled;
-(void)setOverlaySKScene:(id)arg1;
-(void)setDelegate:(id)arg1;
-(SCNNode *)pointOfView;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(void*)context;
-(CGRect)currentViewport;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(void)setLoops:(BOOL)arg1;
-(id<SCNSceneRendererDelegate>)delegate;
-(void)setPointOfView:(id)arg1;
-(SKScene *)overlaySKScene;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)setUsesReverseZ:(BOOL)arg1;
-(BOOL)showsStatistics;
-(BOOL)usesReverseZ;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNScene *)scene;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(BOOL)isTemporalAntialiasingEnabled;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(void)setTemporalAntialiasingEnabled:(BOOL)arg1;

@end
