
#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6 >
class MethodBind6 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]))  ;
	}
#endif
	MethodBind6 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6)  ) {

	MethodBind6 <    P1, P2, P3, P4, P5, P6 > * a = memnew( (MethodBind6 <   P1, P2, P3, P4, P5, P6 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
class MethodBind6 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]))  ;
	}
#endif
	MethodBind6 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6)  ) {

	MethodBind6<T  , P1, P2, P3, P4, P5, P6> * a = memnew( (MethodBind6<T  , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6 >
class MethodBind6R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1])) ,r_ret)  ;
	}
#endif
	MethodBind6R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6)  ) {

	MethodBind6R <  R , P1, P2, P3, P4, P5, P6 > * a = memnew( (MethodBind6R < R , P1, P2, P3, P4, P5, P6 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
class MethodBind6R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1])) ,r_ret) ;
	}
#endif
	MethodBind6R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6)  ) {

	MethodBind6R<T ,R , P1, P2, P3, P4, P5, P6> * a = memnew( (MethodBind6R<T ,R , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6 >
class MethodBind6C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]))  ;
	}
#endif
	MethodBind6C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6) const ) {

	MethodBind6C <    P1, P2, P3, P4, P5, P6 > * a = memnew( (MethodBind6C <   P1, P2, P3, P4, P5, P6 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
class MethodBind6C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]))  ;
	}
#endif
	MethodBind6C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6) const ) {

	MethodBind6C<T  , P1, P2, P3, P4, P5, P6> * a = memnew( (MethodBind6C<T  , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6 >
class MethodBind6RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1])) ,r_ret)  ;
	}
#endif
	MethodBind6RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6) const ) {

	MethodBind6RC <  R , P1, P2, P3, P4, P5, P6 > * a = memnew( (MethodBind6RC < R , P1, P2, P3, P4, P5, P6 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
class MethodBind6RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1])) ,r_ret) ;
	}
#endif
	MethodBind6RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(6);
#else
		set_argument_count(6);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6) const ) {

	MethodBind6RC<T ,R , P1, P2, P3, P4, P5, P6> * a = memnew( (MethodBind6RC<T ,R , P1, P2, P3, P4, P5, P6>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7 >
class MethodBind7 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]))  ;
	}
#endif
	MethodBind7 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7)  ) {

	MethodBind7 <    P1, P2, P3, P4, P5, P6, P7 > * a = memnew( (MethodBind7 <   P1, P2, P3, P4, P5, P6, P7 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class MethodBind7 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]))  ;
	}
#endif
	MethodBind7 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7)  ) {

	MethodBind7<T  , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (MethodBind7<T  , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7 >
class MethodBind7R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1])) ,r_ret)  ;
	}
#endif
	MethodBind7R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7)  ) {

	MethodBind7R <  R , P1, P2, P3, P4, P5, P6, P7 > * a = memnew( (MethodBind7R < R , P1, P2, P3, P4, P5, P6, P7 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class MethodBind7R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1])) ,r_ret) ;
	}
#endif
	MethodBind7R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7)  ) {

	MethodBind7R<T ,R , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (MethodBind7R<T ,R , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7 >
class MethodBind7C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]))  ;
	}
#endif
	MethodBind7C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7) const ) {

	MethodBind7C <    P1, P2, P3, P4, P5, P6, P7 > * a = memnew( (MethodBind7C <   P1, P2, P3, P4, P5, P6, P7 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class MethodBind7C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]))  ;
	}
#endif
	MethodBind7C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7) const ) {

	MethodBind7C<T  , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (MethodBind7C<T  , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7 >
class MethodBind7RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1])) ,r_ret)  ;
	}
#endif
	MethodBind7RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7) const ) {

	MethodBind7RC <  R , P1, P2, P3, P4, P5, P6, P7 > * a = memnew( (MethodBind7RC < R , P1, P2, P3, P4, P5, P6, P7 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
class MethodBind7RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1])) ,r_ret) ;
	}
#endif
	MethodBind7RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(7);
#else
		set_argument_count(7);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7) const ) {

	MethodBind7RC<T ,R , P1, P2, P3, P4, P5, P6, P7> * a = memnew( (MethodBind7RC<T ,R , P1, P2, P3, P4, P5, P6, P7>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8 >
class MethodBind8 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]))  ;
	}
#endif
	MethodBind8 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8)  ) {

	MethodBind8 <    P1, P2, P3, P4, P5, P6, P7, P8 > * a = memnew( (MethodBind8 <   P1, P2, P3, P4, P5, P6, P7, P8 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class MethodBind8 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]))  ;
	}
#endif
	MethodBind8 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8)  ) {

	MethodBind8<T  , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (MethodBind8<T  , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8 >
class MethodBind8R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1])) ,r_ret)  ;
	}
#endif
	MethodBind8R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8)  ) {

	MethodBind8R <  R , P1, P2, P3, P4, P5, P6, P7, P8 > * a = memnew( (MethodBind8R < R , P1, P2, P3, P4, P5, P6, P7, P8 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class MethodBind8R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1])) ,r_ret) ;
	}
#endif
	MethodBind8R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8)  ) {

	MethodBind8R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (MethodBind8R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8 >
class MethodBind8C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]))  ;
	}
#endif
	MethodBind8C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8) const ) {

	MethodBind8C <    P1, P2, P3, P4, P5, P6, P7, P8 > * a = memnew( (MethodBind8C <   P1, P2, P3, P4, P5, P6, P7, P8 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class MethodBind8C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]))  ;
	}
#endif
	MethodBind8C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8) const ) {

	MethodBind8C<T  , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (MethodBind8C<T  , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8 >
class MethodBind8RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1])) ,r_ret)  ;
	}
#endif
	MethodBind8RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8) const ) {

	MethodBind8RC <  R , P1, P2, P3, P4, P5, P6, P7, P8 > * a = memnew( (MethodBind8RC < R , P1, P2, P3, P4, P5, P6, P7, P8 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
class MethodBind8RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1])) ,r_ret) ;
	}
#endif
	MethodBind8RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(8);
#else
		set_argument_count(8);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8) const ) {

	MethodBind8RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8> * a = memnew( (MethodBind8RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9 >
class MethodBind9 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]))  ;
	}
#endif
	MethodBind9 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9)  ) {

	MethodBind9 <    P1, P2, P3, P4, P5, P6, P7, P8, P9 > * a = memnew( (MethodBind9 <   P1, P2, P3, P4, P5, P6, P7, P8, P9 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class MethodBind9 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]))  ;
	}
#endif
	MethodBind9 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9)  ) {

	MethodBind9<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (MethodBind9<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9 >
class MethodBind9R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1])) ,r_ret)  ;
	}
#endif
	MethodBind9R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9)  ) {

	MethodBind9R <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9 > * a = memnew( (MethodBind9R < R , P1, P2, P3, P4, P5, P6, P7, P8, P9 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class MethodBind9R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1])) ,r_ret) ;
	}
#endif
	MethodBind9R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9)  ) {

	MethodBind9R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (MethodBind9R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9 >
class MethodBind9C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]))  ;
	}
#endif
	MethodBind9C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const ) {

	MethodBind9C <    P1, P2, P3, P4, P5, P6, P7, P8, P9 > * a = memnew( (MethodBind9C <   P1, P2, P3, P4, P5, P6, P7, P8, P9 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class MethodBind9C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]))  ;
	}
#endif
	MethodBind9C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const ) {

	MethodBind9C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (MethodBind9C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9 >
class MethodBind9RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1])) ,r_ret)  ;
	}
#endif
	MethodBind9RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const ) {

	MethodBind9RC <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9 > * a = memnew( (MethodBind9RC < R , P1, P2, P3, P4, P5, P6, P7, P8, P9 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
class MethodBind9RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1])) ,r_ret) ;
	}
#endif
	MethodBind9RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(9);
#else
		set_argument_count(9);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9) const ) {

	MethodBind9RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9> * a = memnew( (MethodBind9RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10 >
class MethodBind10 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]))  ;
	}
#endif
	MethodBind10 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10)  ) {

	MethodBind10 <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 > * a = memnew( (MethodBind10 <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class MethodBind10 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]))  ;
	}
#endif
	MethodBind10 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10)  ) {

	MethodBind10<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (MethodBind10<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10 >
class MethodBind10R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1])) ,r_ret)  ;
	}
#endif
	MethodBind10R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10)  ) {

	MethodBind10R <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 > * a = memnew( (MethodBind10R < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class MethodBind10R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1])) ,r_ret) ;
	}
#endif
	MethodBind10R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10)  ) {

	MethodBind10R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (MethodBind10R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10 >
class MethodBind10C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]))  ;
	}
#endif
	MethodBind10C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const ) {

	MethodBind10C <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 > * a = memnew( (MethodBind10C <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class MethodBind10C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]))  ;
	}
#endif
	MethodBind10C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const ) {

	MethodBind10C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (MethodBind10C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10 >
class MethodBind10RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1])) ,r_ret)  ;
	}
#endif
	MethodBind10RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const ) {

	MethodBind10RC <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 > * a = memnew( (MethodBind10RC < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
class MethodBind10RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1])) ,r_ret) ;
	}
#endif
	MethodBind10RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(10);
#else
		set_argument_count(10);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10) const ) {

	MethodBind10RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10> * a = memnew( (MethodBind10RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11 >
class MethodBind11 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]))  ;
	}
#endif
	MethodBind11 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)  ) {

	MethodBind11 <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 > * a = memnew( (MethodBind11 <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class MethodBind11 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]))  ;
	}
#endif
	MethodBind11 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)  ) {

	MethodBind11<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (MethodBind11<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11 >
class MethodBind11R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1])) ,r_ret)  ;
	}
#endif
	MethodBind11R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)  ) {

	MethodBind11R <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 > * a = memnew( (MethodBind11R < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class MethodBind11R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1])) ,r_ret) ;
	}
#endif
	MethodBind11R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11)  ) {

	MethodBind11R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (MethodBind11R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11 >
class MethodBind11C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]))  ;
	}
#endif
	MethodBind11C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const ) {

	MethodBind11C <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 > * a = memnew( (MethodBind11C <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class MethodBind11C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]))  ;
	}
#endif
	MethodBind11C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const ) {

	MethodBind11C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (MethodBind11C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11 >
class MethodBind11RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1])) ,r_ret)  ;
	}
#endif
	MethodBind11RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const ) {

	MethodBind11RC <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 > * a = memnew( (MethodBind11RC < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
class MethodBind11RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1])) ,r_ret) ;
	}
#endif
	MethodBind11RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(11);
#else
		set_argument_count(11);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11) const ) {

	MethodBind11RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11> * a = memnew( (MethodBind11RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12 >
class MethodBind12 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]))  ;
	}
#endif
	MethodBind12 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)  ) {

	MethodBind12 <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 > * a = memnew( (MethodBind12 <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class MethodBind12 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]))  ;
	}
#endif
	MethodBind12 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)  ) {

	MethodBind12<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (MethodBind12<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12 >
class MethodBind12R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1])) ,r_ret)  ;
	}
#endif
	MethodBind12R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)  ) {

	MethodBind12R <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 > * a = memnew( (MethodBind12R < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class MethodBind12R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1])) ,r_ret) ;
	}
#endif
	MethodBind12R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12)  ) {

	MethodBind12R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (MethodBind12R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12 >
class MethodBind12C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]))  ;
	}
#endif
	MethodBind12C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const ) {

	MethodBind12C <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 > * a = memnew( (MethodBind12C <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class MethodBind12C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]))  ;
	}
#endif
	MethodBind12C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const ) {

	MethodBind12C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (MethodBind12C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12 >
class MethodBind12RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1])) ,r_ret)  ;
	}
#endif
	MethodBind12RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const ) {

	MethodBind12RC <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 > * a = memnew( (MethodBind12RC < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
class MethodBind12RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1])) ,r_ret) ;
	}
#endif
	MethodBind12RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(12);
#else
		set_argument_count(12);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12) const ) {

	MethodBind12RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12> * a = memnew( (MethodBind12RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13 >
class MethodBind13 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1]))  ;
	}
#endif
	MethodBind13 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)  ) {

	MethodBind13 <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 > * a = memnew( (MethodBind13 <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class MethodBind13 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1]))  ;
	}
#endif
	MethodBind13 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)  ) {

	MethodBind13<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (MethodBind13<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13 >
class MethodBind13R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1])) ,r_ret)  ;
	}
#endif
	MethodBind13R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)  ) {

	MethodBind13R <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 > * a = memnew( (MethodBind13R < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class MethodBind13R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1])) ,r_ret) ;
	}
#endif
	MethodBind13R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13)  ) {

	MethodBind13R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (MethodBind13R<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13 >
class MethodBind13C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1]))  ;
	}
#endif
	MethodBind13C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const ) {

	MethodBind13C <    P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 > * a = memnew( (MethodBind13C <   P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class MethodBind13C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1]))  ;
	}
#endif
	MethodBind13C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const ) {

	MethodBind13C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (MethodBind13C<T  , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13 >
class MethodBind13RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1])) ,r_ret)  ;
	}
#endif
	MethodBind13RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const ) {

	MethodBind13RC <  R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 > * a = memnew( (MethodBind13RC < R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
class MethodBind13RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		if (p_arg==(6-1)) return GetTypeInfo<P6>::METADATA;
		if (p_arg==(7-1)) return GetTypeInfo<P7>::METADATA;
		if (p_arg==(8-1)) return GetTypeInfo<P8>::METADATA;
		if (p_arg==(9-1)) return GetTypeInfo<P9>::METADATA;
		if (p_arg==(10-1)) return GetTypeInfo<P10>::METADATA;
		if (p_arg==(11-1)) return GetTypeInfo<P11>::METADATA;
		if (p_arg==(12-1)) return GetTypeInfo<P12>::METADATA;
		if (p_arg==(13-1)) return GetTypeInfo<P13>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		if (p_argument==(6-1)) return (Variant::Type)GetTypeInfo<P6>::VARIANT_TYPE;
		if (p_argument==(7-1)) return (Variant::Type)GetTypeInfo<P7>::VARIANT_TYPE;
		if (p_argument==(8-1)) return (Variant::Type)GetTypeInfo<P8>::VARIANT_TYPE;
		if (p_argument==(9-1)) return (Variant::Type)GetTypeInfo<P9>::VARIANT_TYPE;
		if (p_argument==(10-1)) return (Variant::Type)GetTypeInfo<P10>::VARIANT_TYPE;
		if (p_argument==(11-1)) return (Variant::Type)GetTypeInfo<P11>::VARIANT_TYPE;
		if (p_argument==(12-1)) return (Variant::Type)GetTypeInfo<P12>::VARIANT_TYPE;
		if (p_argument==(13-1)) return (Variant::Type)GetTypeInfo<P13>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		if (p_argument==(6-1)) return GetTypeInfo<P6>::get_class_info();
		if (p_argument==(7-1)) return GetTypeInfo<P7>::get_class_info();
		if (p_argument==(8-1)) return GetTypeInfo<P8>::get_class_info();
		if (p_argument==(9-1)) return GetTypeInfo<P9>::get_class_info();
		if (p_argument==(10-1)) return GetTypeInfo<P10>::get_class_info();
		if (p_argument==(11-1)) return GetTypeInfo<P11>::get_class_info();
		if (p_argument==(12-1)) return GetTypeInfo<P12>::get_class_info();
		if (p_argument==(13-1)) return GetTypeInfo<P13>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		CHECK_ARG(6);
		CHECK_ARG(7);
		CHECK_ARG(8);
		CHECK_ARG(9);
		CHECK_ARG(10);
		CHECK_ARG(11);
		CHECK_ARG(12);
		CHECK_ARG(13);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5), _VC(6), _VC(7), _VC(8), _VC(9), _VC(10), _VC(11), _VC(12), _VC(13));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]), PtrToArg<P6>::convert(p_args[6-1]), PtrToArg<P7>::convert(p_args[7-1]), PtrToArg<P8>::convert(p_args[8-1]), PtrToArg<P9>::convert(p_args[9-1]), PtrToArg<P10>::convert(p_args[10-1]), PtrToArg<P11>::convert(p_args[11-1]), PtrToArg<P12>::convert(p_args[12-1]), PtrToArg<P13>::convert(p_args[13-1])) ,r_ret) ;
	}
#endif
	MethodBind13RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(13);
#else
		set_argument_count(13);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5, class P6, class P7, class P8, class P9, class P10, class P11, class P12, class P13>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13) const ) {

	MethodBind13RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13> * a = memnew( (MethodBind13RC<T ,R , P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13>) );
	a->method=p_method;
	return a;
}
#endif
