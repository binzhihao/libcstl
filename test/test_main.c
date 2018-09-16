#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <cstl/cvector.h>

int main(int argc, char const *argv[])
{
    vector_t *p_vec = create_vector(int);
    vector_init(p_vec);
    for (size_t i = 0; i < 10; ++i) {
        vector_push_back(p_vec, i);
    }
    iterator_t iter;
    for (iter = vector_begin(p_vec); !iterator_equal(iter, vector_end(p_vec)); iter = iterator_next(iter)) {
        printf("%d\n", *(int *)iterator_get_pointer(iter));
    }

    return 0;
}

#ifdef __cplusplus
}
#endif
